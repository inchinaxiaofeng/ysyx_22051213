#include <NDL.h>
#include <sdl-video.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

/// @brief 将一张画布中的指定矩形区域复制到另一张画布的指定位置
/// @param src 
/// @param srcrect 
/// @param dst 
/// @param dstrect 
void SDL_BlitSurface(SDL_Surface *src, SDL_Rect *srcrect, 
SDL_Surface *dst, SDL_Rect *dstrect) {
  assert(dst && src);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);

  int srcH = -1;
  int srcW = -1;

  int srcX = -1;
  int srcY = -1;

  if (srcrect == NULL) {
    srcH = src -> h;
    srcW = src -> w;
    srcX = 0;
    srcY = 0;
  } else {
    srcH = srcrect -> h;
    srcW = srcrect -> w;
    srcX = srcrect -> x;
    srcY = srcrect -> y;
  }
  assert(srcH >= 0);
  assert(srcW >= 0);
  assert(srcX >= 0);
  assert(srcY >= 0);

  int dstX = -1;
  int dstY = -1;

  //assert(dstrect != NULL);

  if (dstrect == NULL) {
    dstX = 0;
    dstY = 0;
  } else {
    dstX = dstrect -> x;
    dstY = dstrect -> y;
  }

  assert(dstX >= 0);
  assert(dstY >= 0);

  if (32 == src->format->BitsPerPixel) {
    uint32_t* srcPixels = (uint32_t*)src -> pixels;
    uint32_t* dstPixels = (uint32_t*)dst -> pixels;

    for (int row = 0; row < srcH; row++) {
      for (int col = 0; col < srcW; col++) {
        dstPixels[(dstY + row) * (dst -> w) + (dstX + col)] = srcPixels[(srcY + row) * (src -> w) + (srcX + col)];
      }
    }
  } else if (8 == src->format->BitsPerPixel) {
    // dst->format->BitsPerPixel = 8;
    for (int row = 0; row < srcH; row++) {
      for (int col = 0; col < srcW; col++) {
        dst -> pixels[(dstY + row) * (dst -> w) + (dstX + col)] = src -> pixels[(srcY + row) * (src -> w) + (srcX + col)];
      }
    }
  } else {
    assert(0);
  }
}

/// @brief 向指定區域繪製顏色
/// @param dst 繪製Surface
/// @param dstrect 傳入空時，默認爲向全屏幕繪製
/// @param color 繪製的顏色
void SDL_FillRect(SDL_Surface *dst, 
SDL_Rect *dstrect, uint32_t color) {
  assert(NULL != dst);

  int rect_x, rect_y, rect_w, rect_h;

  // SDL_Rect rect;
  if (NULL == dstrect) {
    rect_x = 0;
    rect_y = 0;
    rect_h = dst->h;
    rect_w = dst->w;
  } else {
    //rect = *dstrect;
    rect_x = dstrect->x;
    rect_y = dstrect->y;
    rect_h = dstrect->h;
    rect_w = dstrect->w;
  }

  //注意SDL_Surface的pixels是以字节为单位的，需要转成uint32_t *再操作指针。
  uint32_t *pixels = (uint32_t *)dst->pixels;

  for (size_t row = 0; row < rect_h; row++) {
    for (size_t col = 0; col < rect_w; col++) {
      pixels[(rect_y + row)*(dst->w) + (rect_x + col)] = color;
    }
  }
  return;
}

/// @brief 更新指定Surface，當x,y,w,h都是0時，更新全部內容
/// @param s 
/// @param x 
/// @param y 
/// @param w 
/// @param h 
void SDL_UpdateRect(SDL_Surface *s, int x, int y, int w, int h) {
  assert(NULL != s);

  if (0 == x && 0 == y && 0 == w && 0 == h) {
    w = s->w;
    h = s->h;
  }

  if (32 == s->format->BitsPerPixel) {
    NDL_DrawRect((uint32_t *)(s->pixels), x, y, w, h);
  } else if (8 == s->format->BitsPerPixel) {
    int len = w * h;
    uint32_t *pixels = (uint32_t *)malloc(4 * len);
    for (size_t i = 0; i < len; i++)
    {
      SDL_Color pixel = s->format->palette->colors[s->pixels[i]];
      pixels[i] = (uint32_t)pixel.a << 24 |
                  (uint32_t)pixel.r << 16 |
                  (uint32_t)pixel.g << 8  |
                  (uint32_t)pixel.b;
    }
    NDL_DrawRect(pixels, x, y, w, h);
    free(pixels);
  } else assert(0);
  return;
}

// APIs below are already implemented.

static inline int maskToShift(uint32_t mask) {
  switch (mask) {
    case 0x000000ff: return 0;
    case 0x0000ff00: return 8;
    case 0x00ff0000: return 16;
    case 0xff000000: return 24;
    case 0x00000000: return 24; // hack
    default: assert(0);
  }
}

SDL_Surface* SDL_CreateRGBSurface(uint32_t flags, int width, int height, int depth,
    uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  assert(depth == 8 || depth == 32);
  SDL_Surface *s = malloc(sizeof(SDL_Surface));
  assert(s);
  s->flags = flags;
  s->format = malloc(sizeof(SDL_PixelFormat));
  assert(s->format);
  if (depth == 8) {
    s->format->palette = malloc(sizeof(SDL_Palette));
    assert(s->format->palette);
    s->format->palette->colors = malloc(sizeof(SDL_Color) * 256);
    assert(s->format->palette->colors);
    memset(s->format->palette->colors, 0, sizeof(SDL_Color) * 256);
    s->format->palette->ncolors = 256;
  } else {
    s->format->palette = NULL;
    s->format->Rmask = Rmask; s->format->Rshift = maskToShift(Rmask); s->format->Rloss = 0;
    s->format->Gmask = Gmask; s->format->Gshift = maskToShift(Gmask); s->format->Gloss = 0;
    s->format->Bmask = Bmask; s->format->Bshift = maskToShift(Bmask); s->format->Bloss = 0;
    s->format->Amask = Amask; s->format->Ashift = maskToShift(Amask); s->format->Aloss = 0;
  }

  s->format->BitsPerPixel = depth;
  s->format->BytesPerPixel = depth / 8;

  s->w = width;
  s->h = height;
  s->pitch = width * depth / 8;
  assert(s->pitch == width * s->format->BytesPerPixel);

  if (!(flags & SDL_PREALLOC)) {
    s->pixels = malloc(s->pitch * height);
    assert(s->pixels);
  }

  return s;
}

SDL_Surface* SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height, int depth,
    int pitch, uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  SDL_Surface *s = SDL_CreateRGBSurface(SDL_PREALLOC, width, height, depth,
      Rmask, Gmask, Bmask, Amask);
  assert(pitch == s->pitch);
  s->pixels = pixels;
  return s;
}

/// @brief 釋放Surface的資源
/// @param s 
void SDL_FreeSurface(SDL_Surface *s) {
  if (s != NULL) {
    if (s->format != NULL) {
      if (s->format->palette != NULL) {
        if (s->format->palette->colors != NULL) free(s->format->palette->colors);
        free(s->format->palette);
      }
      free(s->format);
    }
    if (s->pixels != NULL && !(s->flags & SDL_PREALLOC)) free(s->pixels);
    free(s);
  }
}

SDL_Surface* SDL_SetVideoMode(int width, int height, int bpp, uint32_t flags) {
  if (flags & SDL_HWSURFACE) NDL_OpenCanvas(&width, &height);
  return SDL_CreateRGBSurface(flags, width, height, bpp,
      DEFAULT_RMASK, DEFAULT_GMASK, DEFAULT_BMASK, DEFAULT_AMASK);
}

void SDL_SoftStretch(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  assert(src && dst);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  assert(dst->format->BitsPerPixel == 8);

  int x = (srcrect == NULL ? 0 : srcrect->x);
  int y = (srcrect == NULL ? 0 : srcrect->y);
  int w = (srcrect == NULL ? src->w : srcrect->w);
  int h = (srcrect == NULL ? src->h : srcrect->h);

  assert(dstrect);
  if(w == dstrect->w && h == dstrect->h) {
    /* The source rectangle and the destination rectangle
     * are of the same size. If that is the case, there
     * is no need to stretch, just copy. */
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;
    SDL_BlitSurface(src, &rect, dst, dstrect);
  }
  else {
    assert(0);
  }
}

/// @brief 設置調色版
/// @param s 
/// @param flags 
/// @param colors 
/// @param firstcolor 
/// @param ncolors 
void SDL_SetPalette(SDL_Surface *s, int flags, SDL_Color *colors, int firstcolor, int ncolors) {
  assert(s);
  assert(s->format);
  assert(s->format->palette);
  assert(firstcolor == 0);

  s->format->palette->ncolors = ncolors;
  memcpy(s->format->palette->colors, colors, sizeof(SDL_Color) * ncolors);

  if(s->flags & SDL_HWSURFACE) {
    assert(ncolors == 256);
    for (int i = 0; i < ncolors; i ++) {
      uint8_t r = colors[i].r;
      uint8_t g = colors[i].g;
      uint8_t b = colors[i].b;
    }
    SDL_UpdateRect(s, 0, 0, 0, 0);
  }
}

static void ConvertPixelsARGB_ABGR(void *dst, void *src, int len) {
  int i;
  uint8_t (*pdst)[4] = dst;
  uint8_t (*psrc)[4] = src;
  union {
    uint8_t val8[4];
    uint32_t val32;
  } tmp;
  int first = len & ~0xf;
  for (i = 0; i < first; i += 16) {
#define macro(i) \
    tmp.val32 = *((uint32_t *)psrc[i]); \
    *((uint32_t *)pdst[i]) = tmp.val32; \
    pdst[i][0] = tmp.val8[2]; \
    pdst[i][2] = tmp.val8[0];

    macro(i + 0); macro(i + 1); macro(i + 2); macro(i + 3);
    macro(i + 4); macro(i + 5); macro(i + 6); macro(i + 7);
    macro(i + 8); macro(i + 9); macro(i +10); macro(i +11);
    macro(i +12); macro(i +13); macro(i +14); macro(i +15);
  }

  for (; i < len; i ++) {
    macro(i);
  }
}

SDL_Surface *SDL_ConvertSurface(SDL_Surface *src, SDL_PixelFormat *fmt, uint32_t flags) {
  assert(src->format->BitsPerPixel == 32);
  assert(src->w * src->format->BytesPerPixel == src->pitch);
  assert(src->format->BitsPerPixel == fmt->BitsPerPixel);

  SDL_Surface* ret = SDL_CreateRGBSurface(flags, src->w, src->h, fmt->BitsPerPixel,
    fmt->Rmask, fmt->Gmask, fmt->Bmask, fmt->Amask);

  assert(fmt->Gmask == src->format->Gmask);
  assert(fmt->Amask == 0 || src->format->Amask == 0 || (fmt->Amask == src->format->Amask));
  ConvertPixelsARGB_ABGR(ret->pixels, src->pixels, src->w * src->h);

  return ret;
}

uint32_t SDL_MapRGBA(SDL_PixelFormat *fmt, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
  assert(fmt->BytesPerPixel == 4);
  uint32_t p = (r << fmt->Rshift) | (g << fmt->Gshift) | (b << fmt->Bshift);
  if (fmt->Amask) p |= (a << fmt->Ashift);
  return p;
}

int SDL_LockSurface(SDL_Surface *s) {
  return 0;
}

void SDL_UnlockSurface(SDL_Surface *s) {
}

#include <stdio.h>
#include <sys/time.h>
#include <NDL.h>

#define TIME_YIELD 1

int main(int argc, char *argv[]) {
	int now = 0;
	int prv = 0;
	
//	assert(1 == 0);
	while(1) {
		if (now - prv >= TIME_YIELD) {
			printf("timer:%d\n", now);
			prv = now;
		}
		now = NDL_GetTicks() / 1000;
	}

	return 0;
}

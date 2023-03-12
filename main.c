#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
#include "rtclock.h"
#include "mmm.h"

int main(int argc, char *argv[]) {
	for (int i=0; i<4; i++){
	mmm_init(argv);
	}
	return 0;
}

all: main.c mmm.o rtclock.o
	gcc -Wall -o mmm main.c mmm.o rtclock.o -lpthread

mmm.o: mmm.h mmm.c
	gcc -Wall -c mmm.c

rtclock.o: rtclock.h rtclock.c
	gcc -Wall -c rtclock.c

clean:
	rm -f mmm *.o

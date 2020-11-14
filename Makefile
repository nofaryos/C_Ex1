CC=gcc
AR=ar
OBJECTS_MAIN=main.o
FLAGS=-Wall -g


all : mains maind 
mymathd: libmyMath.so
mymaths: libmyMath.a

#static
mains: $(OBJECTS_MAIN) libmyMath.a
	$(CC) $(-Wall -g) -o mains $(OBJECTS_MAIN) libmyMath.a

#dynamyc
maind: $(OBJECTS_MAIN) libmyMath.so
	$(CC) $(-Wall -g) -o maind $(OBJECTS_MAIN) ./libmyMath.so

#creating static lib.a	
libmyMath.a: power.o basicMath.o
	$(AR) -rcs libmyMath.a power.o basicMath.o

#creating dynamyc lib.a	
libmyMath.so: power.o basicMath.o
	$(CC) $(-Wall -g) -shared -o libmyMath.so power.o basicMath.o

main.o: main.c myMath.h
	$(CC) $(-Wall -g) -c main.c

power.o: power.c myMath.h
	$(CC) $(-Wall -g) -c power.c
	
basicMath.o: basicMath.c myMath.h
	$(CC) $(-Wall -g) -c basicMath.c
	
.PHONY: clean

clean:
	rm -f  *.o maind mains *.a  *.so 


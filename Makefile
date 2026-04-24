all: hw3

hw3: hw3_a.o hw3_b.o
	gcc -o hw3 hw3_a.o hw3_b.o -lm

hw3_a.o: hw3_a.c
	gcc -c -fcommon hw3_a.c

hw3_b.o: hw3_b.c
	gcc -c -fcommon hw3_b.c

clean:
	rm -f *.o hw3

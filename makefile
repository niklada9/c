CFLAGS=-Wall -pthread

main: main.o f.o 

clean:
	rm -f *.o main 

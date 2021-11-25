CC=gcc
FLAGS= -Wall -g

all: connections

connections: main.o 
	$(CC) $(FLAGS) -o connections main.o
	
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

clean:
	rm -f *.o
all: driver.o node.o library.o
	@gcc -o library.out driver.o node.o library.o

driver.o: driver.c node.h
	@gcc -c driver.c

node.o: node.c node.h
	@gcc -c node.c

library.o: library.c library.h
	@gcc -c library.c

clean:
	@rm *.o*

run:
	@./library.out

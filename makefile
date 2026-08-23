TARGET=main
FLAGS= -g -std=c++11 -Werror -Wall -I
CXX = g++
OBJ_DIR=obj

objects=main.o

all : $(objects)
mem : $(target)
	valgrind --leak-check=full --track-origins=yes ./$(target) memory.log 

clean:
	rm -rf main *.o && clear



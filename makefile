TARGET=main
FLAGS= -g -std=c++11 -Werror -Wall -Iinclude -Isrc
CXX = g++
OBJ_DIR=obj

OBJECTS=(saba)

all : $(TARGET)

run : $(TARGET)
	./$(TARGET)

mem : $(target)
	valgrind --leak-check=full --track-origins=yes ./$(target) memory.log 

clean:
	rm -rf main *.o && clear



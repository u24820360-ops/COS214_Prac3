target=main
flags= -g -std=c++11 -Werror -Wall 
CXX= g++

mem : $(target)
	valgrind --leak-check=full --track-origins=yes ./$(target) memory.log 
	
clean:
	rm -rf main *.o && clear



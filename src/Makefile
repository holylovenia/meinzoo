CC = g++
OPTIONS = -std=c++11
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o) $(wildcard */*.o) $(wildcard */*/*.o)

.PHONY: all clean	

all: $(OBJ)
	cd misc && $(MAKE)
	cd infrastructure && $(MAKE)
	cd animal && $(MAKE)
	$(CC) $(OPTIONS) $(OBJ) -o zoo.exe

%.o: %.cpp
	$(CC) $(OPTIONS) -c -o $@ $<

clean:
	rm -rf $(OBJ)
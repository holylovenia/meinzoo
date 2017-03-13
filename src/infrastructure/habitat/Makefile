CC = g++
OPTIONS = -std=c++11
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

.PHONY: all clean

all: $(OBJ)	

%.o: %.cpp
	$(CC) $(OPTIONS) -c -o $@ $<

clean:
	rm -rf $(OBJ)
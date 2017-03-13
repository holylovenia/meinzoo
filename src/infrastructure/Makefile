CC = g++
OPTIONS = -std=c++11
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

.PHONY: all clean

all: $(OBJ)
	cd facility && $(MAKE)
	cd habitat && $(MAKE)

%.o: %.cpp
	$(CC) $(OPTIONS) -c -o $@ $<

clean:
	rm -rf $(OBJ)
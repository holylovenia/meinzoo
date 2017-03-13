CC = g++
OPTIONS = -std=c++11
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

.PHONY: all clean

all: $(OBJ)
	cd behavior && $(MAKE)
	cd diet && $(MAKE)
	cd aves && $(MAKE)
	cd mammalia && $(MAKE)
	cd pisces && $(MAKE)
	cd reptilia && $(MAKE)

%.o: %.cpp
	$(CC) $(OPTIONS) -c -o $@ $<

clean:
	rm -rf $(OBJ)
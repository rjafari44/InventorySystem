.PHONY: all clean

GCC         := g++
GCC_VERSION := -std=c++17
SRC         := Practice1.cpp
SRC_DIR 	:= ./src
EXEC        := test

all:
	$(GCC) $(GCC_VERSION) $(SRC_DIR)/$(SRC) -o $(EXEC)

clean:
	rm -f $(EXEC)

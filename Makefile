// Simple Makefile for compiling and running tests

CC=g++
CFLAGS=-std=c++17 -Wall -Wextra -Wpedantic

SOURCES=src/data_management.cpp src/simulation.cpp src/tax_management.cpp src/reporting.cpp
OBJECTS=$(SOURCES:.cpp=.o)

EXECUTABLE=financial-monte-carlo-simulator

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^ -lm

test_data_management: 
	make -C tests test_data_management

test_simulation: 
	make -C tests test_simulation

test_tax_management: 
	make -C tests test_tax_management

test_reporting: 
	make -C tests test_reporting

clean:
	make -C tests clean
	rm -f $(EXECUTABLE) $(OBJECTS)

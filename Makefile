# Biến
CXX = g++
CXXFLAGS = -Wall -g

# Tên file thực thi
TARGET = text

# Tên file nguồn
SRC = text.cpp


all : build run

build :
	g++ -o text text.cpp

run :
	./text text.cpp
clean : 
	rm -f $(TARGET) $(TARGET).exe *.o
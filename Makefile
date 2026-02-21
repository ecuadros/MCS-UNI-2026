CXX = g++
CXXFLAGS = -std=c++20 -Wall -g -pthread # Añadido -pthread
LDFLAGS = -pthread # Añadido -pthread

TARGET = main
SRCS = main.cpp util.cpp Pointers.cpp \
	   bits.cpp \
	   complex.cpp \
	   DemoShapes.cpp \
	   geometry/shape.cpp \
	   geometry/rectangle.cpp \
	   geometry/circle.cpp \
	   geometry/triangle.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(LDFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
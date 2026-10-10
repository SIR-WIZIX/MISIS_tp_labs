CXX = g++
CPPFLAGS = -Iinclude
CXXFLAGS = -std=c++17 -Wall -Wextra -Wpedantic
LDFLAGS =
LDLIBS =

TARGET = build/poc
SOURCES = $(wildcard src/*.cpp)
OBJECTS = $(SOURCES:src/%.cpp=build/%.o)
DEPS = $(OBJECTS:.o=.d)

.PHONY: all run clean

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(LDFLAGS) $(OBJECTS) $(LDLIBS) -o $@

build/%.o: src/%.cpp Makefile | build
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -MMD -MP -c $< -o $@

build:
	mkdir -p build

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf build

-include $(DEPS)

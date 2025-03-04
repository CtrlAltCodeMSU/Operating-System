# Compiler
CXX = g++

# Compiler Flags
CXXFLAGS = -std=c++11 -Wall

# Executable Name
TARGET = my_program

# Object Files
OBJS = student.o teacher.o course.o main.o

# Rule to build the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile Student.cpp
Student.o: student.cpp student.h
	$(CXX) $(CXXFLAGS) -c student.cpp

# Rule to compile Teacher.cpp
Teacher.o: teacher.cpp teacher.h
	$(CXX) $(CXXFLAGS) -c teacher.cpp

# Rule to compile Course.cpp
Course.o: course.cpp course.h
	$(CXX) $(CXXFLAGS) -c course.cpp

# Rule to compile main.cpp
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

# Clean the compiled files
clean:
	rm -f $(TARGET) $(OBJS)
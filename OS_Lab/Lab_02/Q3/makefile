CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = my_program
OBJS = student.o teacher.o course.o main.o
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)
Student.o: student.cpp student.h
	$(CXX) $(CXXFLAGS) -c student.cpp
Teacher.o: teacher.cpp teacher.h
	$(CXX) $(CXXFLAGS) -c teacher.cpp
Course.o: course.cpp course.h
	$(CXX) $(CXXFLAGS) -c course.cpp
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp
clean:
	rm -f $(TARGET) $(OBJS)
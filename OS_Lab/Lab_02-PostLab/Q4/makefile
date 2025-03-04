CXX = g++
CXXFLAGS = -std=c++11 -Wall

TARGET = text_analysis

OBJS = LetterCount.o WordCount.o LineCount.o main.o

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

LetterCount.o: LetterCount.cpp LetterCount.h
	$(CXX) $(CXXFLAGS) -c LetterCount.cpp

WordCount.o: WordCount.cpp WordCount.h
	$(CXX) $(CXXFLAGS) -c WordCount.cpp

LineCount.o: LineCount.cpp LineCount.h
	$(CXX) $(CXXFLAGS) -c LineCount.cpp

clean:
	rm -f $(OBJS) $(TARGET)




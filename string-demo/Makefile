CXX		 = g++
CXXFLAGS = -Wall -std=c++11 -g
TARGET	 = demo.exe
SRC		  = *.cpp ../BWString.cpp
INCLUDES = -I../

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) $(INCLUDES) -o $(TARGET)

clean:
	rm -f $(TARGET)
CXX		 = g++
CXXFLAGS = -Wall -std=c++17 -g
TARGET	 = main.exe
SRC		 = *.cpp

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
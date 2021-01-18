CXX := g++ -m64
CXXFLAGS := -Wall -Wextra -std=c++2a

test: include/range.h test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o $@


CXX := g++ -m64
CXXFLAGS := -Wall -Wextra -std=c++2a

test: include/range.h test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o $@

test17: include/range17.h test17.cpp
	$(CXX) -std=c++17 test17.cpp -o $@


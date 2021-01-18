# Python-like range
This simple header file attempts to mimic the behaviour of the range loop in python.

##### Usage :
```cpp
#include "include/range.h"
#include <cstdio>

int main(int, char*[])
{
    for(auto i : range(1, 10 + 1))
    {
        std::printf("%d ", i);
    }
}
```
Output :
```
1 2 3 4 5 6 7 8 9 10 
```
Make sure to enable C++20 in order to be able to use the library.
If you cannot use C++20, there is a C++17 fall back header available.
```makefile
$(CXX) -std=c++20 program.cpp -o a.out
```



You can omit the first argument and the range will by default start at 0.
Example : 
```cpp
#include "include/range.h"
#include <cstdio>

int main(int, char*[])
{
    for(auto i : range(10))
    {
        std::printf("%d ", i);
    }
}
```
Output :
```
0 1 2 3 4 5 6 7 8 9
```

If you’re feeling extra you can even specify the length of a step as a third argument :
```cpp
#include "include/range.h"
#include <cstdio>

int main(int, char*[])
{
    for(auto i : range(0, -10, -1))
    {
        std::printf("%d ", i);
    }
}
```
Output :
```
0 -1 -2 -3 -4 -5 -6 -7 -8 -9
```

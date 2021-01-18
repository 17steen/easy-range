#include "include/range17.h"
#include <cstdio>

int
main(int, char*[])
{
    for (auto i : range(0, -10, -1)) {
        printf("%d\n", i);
    }
}


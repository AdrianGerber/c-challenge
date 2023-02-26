#include <stdio.h>
#include <stdint.h>

int main(void)
{
    // What number will be printed? How does the preprocessor handle self-referential macros?
    // Bonus point: What is the gcc flag to show the preprocessor's output?

    int x = 15, y = 7;
    
#define x (4 * y)
#define y (5 + x)

    int z = x + y;
    printf("%d", z);
    return 0;
}
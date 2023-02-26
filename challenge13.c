#include <stdio.h>
#include <stdint.h>

#define PRINTF(fmt, ...) printf(fmt, ##__VA_ARGS__)

int main(void)
{
    // Why does the second line not trigger any compile errors? 
    // What happens to the trailing comma (e.g. printf(fmt,))?

    PRINTF("%s %s\n", "Hello", "World");
    PRINTF("Hello World\n");
    return 0;
}
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    // Why does this program not produce any output when compiled with optimization?
    // Hint: The compiler could even translate this into an executable that formats 
    //       your hard drive without breaking any rules of the c standard.

    int32_t i = INT32_MAX;
    if (i + 1 < 0){
        printf("Overflow\n");
    }
}
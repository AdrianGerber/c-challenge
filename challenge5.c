#include <stdio.h>
#include <stdint.h>

int main(void)
{
    // What does this do?

    int *x = &(int){5};
    printf("%d", *x);
}

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    // This program cannot be compiled. Which of the following lines is to blame?

    uint8_t array[10];
    printf("%d\n", sizeof  array );
    printf("%d\n", sizeof (array));

    printf("%d\n", sizeof  array[0] );
    printf("%d\n", sizeof (array[0]));

    printf("%d\n", sizeof  uint8_t );
    printf("%d\n", sizeof (uint8_t));

    return 0;
}
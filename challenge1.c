#include <stdio.h>
#include <stdint.h>

int main(void)
{
    // what number will this print?

    float x = 10000000.0f;
    for (uint32_t i = 10000000; i < 20000000; i++)
        x++;

    printf("%f", x);
}

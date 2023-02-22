#include <stdio.h>
#include <stdint.h>

int main(void)
{
    // What number does this program print?
    // Bonus point if you know who invented it and where it was used...

    int i = 12;
    int j = (i + 4) / 5;
    int x = 0;

    switch (i % 5)
    {
        case 0: do { x++;
        case 4: x++;
        case 3: x++;
        case 2: x++;
        case 1: x++;
        } while (--j > 0);
    }

    printf("%d", x);
}

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    // Does this compile? What does the program print and most importantly how does it work?

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    3 [a] = 999;

    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
}

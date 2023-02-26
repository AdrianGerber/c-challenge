#include <stdio.h>
#include <stdint.h>

void func(a, b)
double b;
int a;
{
    printf("%d, %f", a, b);
}

int main(void)
{
    // Does this work as expected?

    func(12, 500.234);
    return 0;
}
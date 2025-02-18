#include <stdio.h>

long add(long a, long b);

int main(void)
{
    printf("%li\n", add(8000000000000000000, 8000000000000000000));
}

long add(long a, long b)
{
    return a + b;
}
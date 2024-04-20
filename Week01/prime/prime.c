#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{

    bool is_prime = false;

    if (number == 2)
    {
        is_prime = true;
    }

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            is_prime = false;
            break;
        }
        else
        {
            is_prime = true;
        }
    }

    return is_prime;
}
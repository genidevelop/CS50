#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for change owed, in cents.
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    // Calculates how many quarters you should give customer. Subtract the value of those quarters
    // from cents.
    int quarters = cents / 25;
    if (quarters > 0)
    {
        cents -= quarters * 25;
    }
    // Calculate how many dimes you should give customer. Subtract the value of those dimes from
    // remaining cents.
    int dimes = cents / 10;
    if (dimes > 0)
    {
        cents -= dimes * 10;
    }
    // Calculate how many nickels you should give customer. Subtract the value of those nickels from
    // remaining cents.
    int nickels = cents / 5;
    if (nickels > 0)
    {
        cents -= nickels * 5;
    }
    // Calculate how many pennies you should give customer. Subtract the value of those pennies from
    // remaining cents.
    int pennies = 0;
    if (cents != 0)
    {
        pennies = cents;
    }
    // Sum the number of quarters, dimes, nickels and pennies used.
    int coins = quarters + dimes + nickels + pennies;
    // Print that sum.
    printf("%i\n", coins);
}
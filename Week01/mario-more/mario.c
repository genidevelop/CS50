#include <cs50.h>
#include <stdio.h>

void print_left_pyramid(int spaces, int bricks);
void print_right_pyramid(int bricks);

int main(void)
{
    // Prompt the user for the pyramid's height
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Print two pyramids of that height separated by two spaces
    for (int i = 0; i < height; i++)
    {
        print_left_pyramid(height - i - 1, i + 1);
        printf("  ");
        print_right_pyramid(i + 1);
        printf("\n");
    }
}

// Print the left pyramid
void print_left_pyramid(int spaces, int bricks)
{
    // Print spaces
    for (int i = spaces; i > 0; i--)
    {
        printf(" ");
    }

    // Print bricks
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
}

// Print the right pyramid
void print_right_pyramid(int bricks)
{
    // Print bricks
    for (int i = bricks; i > 0; i--)
    {
        printf("#");
    }
}
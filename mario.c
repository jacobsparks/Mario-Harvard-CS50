#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Getting user input
    int height;

    // Validating user input
    do
    {
        height = get_int("Height: ");
    }
    while (height < 0 || height > 23);

    for (int i = 0; i < height; i++)
    {
        // Printing spaces
        for (int j = height - i - 1; j > 0; j--)
        {
            printf(" ");
        }
        // Printing hashes
        for (int j = -2; j < i; j++)
        {
            printf("#");
        }
        // Printing new line after each row
        printf("\n");

    }
}
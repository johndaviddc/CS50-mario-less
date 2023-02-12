#include "cs50.h"
#include <stdio.h>

int main(void)
{
    int height = get_int("Height: ");
    while (height < 1 || height > 8)
    {
        height = get_int("Height: ");
    }

    // Loop through each row
    for (int i = 0; i < height; i++)
    {

        // Print spaces
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        // Print hashes
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        // Move to the next line
        printf("\n");
    }
}
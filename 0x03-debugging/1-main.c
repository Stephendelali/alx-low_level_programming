#include <stdio.h>

/**
 * main - demonstrates an infinite loop
 * Return: Always 0
 */
int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");
        i = 0;

        while (i < 10)  // Commented out to avoid the infinite loop
        {
                /* putchar(i); */
                i++;  // Increment i to avoid infinite loop
        }

        printf("Infinite loop avoided! \\o/\n");
        return (0);
}

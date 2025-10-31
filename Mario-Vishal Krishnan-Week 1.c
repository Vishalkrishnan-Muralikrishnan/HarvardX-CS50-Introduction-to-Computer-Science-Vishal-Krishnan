#include <cs50.h>
#include <stdio.h>

void Pyramid(int n);

int main(void)
{
    int n = get_int("Enter the Pyramid height between 1 and 8: ");
    while (n < 1 || n > 8)
    {
        n = get_int("Enter the Pyramid height between 1 and 8: ");
    }
    Pyramid(n);
}

void Pyramid(int n)
{
    for (int i = 1; i <= n; i++)  
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int o = 0; o < i; o++)
        {
            printf("#");
        }

        printf("\n");
    }
}

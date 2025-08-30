#include <cs50.h>
#include <stdio.h>

void Pyramid1(int n);

int main(void)
{
    int n = get_int("Enter the Pyramid height between 1 and 8: ");
    while(n>8 || n<=0)
    {
      n = get_int("Enter the Pyramid height between 1 and 8: ");
    }
    Pyramid1(n);

}

void Pyramid1(int n)
{   int i;
    int j;
    int k;
    int o;
    for (i=0;i < n+1 ;i++)
    {
        for (j=0; j<(n-i) ;j++)
        {
            printf(" ");
        }
        for (k=0; k<i ;k++)
        {
            printf("#");
        }
        printf("  ");
        for (o=0;o<i;o++)
        {
            printf("#");
        }
        printf("\n");
    }

}


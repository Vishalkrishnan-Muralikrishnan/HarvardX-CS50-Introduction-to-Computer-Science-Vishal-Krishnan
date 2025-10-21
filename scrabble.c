#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int Sum1=0;
int x=0;
int y=0;
int Sum2=0;
int Scrabble1(string a);
int Scrabble2(string b);

int main(void)
{
    string Player1 = get_string("Player 1: ");

    for (int i=0; i<strlen(Player1);i++)
    {
       Player1[i]=toupper(Player1[i]);
    }

    string Player2 = get_string("Player 2: ");

    for (int i=0; i<strlen(Player2);i++)
    {
       Player2[i]=toupper(Player2[i]);
    }

    x=Scrabble1(Player1);
    y=Scrabble2(Player2);

    if (x>y)
    {
        printf("Player 1 Wins!\n");
    }
    else if (y>x)
    {
        printf("Player 2 Wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int Scrabble1(string a)
{
    for (int i = 0; i<strlen(a); i++)
    {
       if (a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='L' || a[i]=='N' || a[i]=='O' || a[i]=='R' || a[i]=='S' || a[i]=='T' || a[i]=='U')
       {
          Sum1+=1;
       }
       else if (a[i]=='D' || a[i]=='G')
       {
          Sum1+=2;
       }
       else if (a[i]=='B' || a[i]=='C' || a[i]=='M' || a[i]=='P')
       {
          Sum1+=3;
       }
       else if (a[i]=='F' || a[i]=='H' || a[i]=='V' || a[i]=='W' || a[i]=='Y')
       {
          Sum1+=4;
       }
       else if (a[i]=='K')
       {
          Sum1+=5;
       }
       else if (a[i]=='J' || a[i]=='X')
       {
          Sum1+=8;
       }
       else if (a[i]=='Z' || a[i]=='Q')
       {
          Sum1+=10;
       }
    }
    return Sum1;
}


int Scrabble2(string b)
{
    for (int i = 0; i<strlen(b); i++)
    {
       if (b[i]=='A' || b[i]=='E' || b[i]=='I' || b[i]=='L' || b[i]=='N' || b[i]=='O' || b[i]=='R' || b[i]=='S' || b[i]=='T' || b[i]=='U')
       {
          Sum2+=1;
       }
       else if (b[i]=='D' || b[i]=='G')
       {
          Sum2+=2;
       }
       else if (b[i]=='B' || b[i]=='C' || b[i]=='M' || b[i]=='P')
       {
          Sum2+=3;
       }
       else if (b[i]=='F' || b[i]=='H' || b[i]=='V' || b[i]=='W' || b[i]=='Y')
       {
          Sum2+=4;
       }
       else if (b[i]=='K')
       {
          Sum2+=5;
       }
       else if (b[i]=='J' || b[i]=='X')
       {
          Sum2+=8;
       }
       else if (b[i]=='Z' || b[i]=='Q')
       {
          Sum2+=10;
       }
    }
    return Sum2;
}

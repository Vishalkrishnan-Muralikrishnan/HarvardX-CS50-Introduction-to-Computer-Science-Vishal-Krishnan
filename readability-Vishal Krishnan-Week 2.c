#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

float letter;
float sent;
float word;
float words(string b);
float Letters(string a);
float sentences(string c);
float x;
float y;
float z;
int O;
float L=0;
float S=0;

int main(void)
{
    string text= get_string("Text: ");
    x=Letters(text);
    y=words(text);
    z=sentences(text);

    //printf("%f\n",y);
    //printf("%f\n",x);
    //printf("%f\n",z);


    L= (x/(y+1))*100.00;
    S= (z/(y+1))*100.00;

    //printf("%f\n",L);
    //printf("%f\n",S);

    float index = 0.0588 * L - 0.296 * S - 15.8;

    //printf("%f\n",index);
    O= round(index);

    if (O<1)
    {
        printf("Before Grade 1\n");
    }
    else if (O>16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n",O);
    }




}

float Letters(string a)
{
   for (int i = 0; i<strlen(a); i++)
    {
        if (isalpha(a[i]))
        {
            letter+=1;
        }

    }
    return letter;
}

float words(string b)
{
    for (int i = 0; i<strlen(b); i++)
    {
        if (isblank(b[i]))
        {
            word+=1;
        }

    }
    return word;
}

float sentences(string c)
{
    for (int i = 0; i<strlen(c); i++)
    {
        if (ispunct(c[i]))
        {if (c[i] == '.' || c[i] == '?' || c[i] == '!')
            {
               sent+=1;
            }
        }

    }
    return sent;
}

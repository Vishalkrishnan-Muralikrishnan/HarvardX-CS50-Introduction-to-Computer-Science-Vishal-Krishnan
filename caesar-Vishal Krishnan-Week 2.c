#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
  if (argc==2)
  {

    int n=0;
    string ciphertext="";


    for (int i=0;i<strlen(argv[1]);i++)
    {
    if (isdigit(argv[1][i]))
    {
        n++;
    }

    }

    if (n==strlen(argv[1]))
    {

        int x= atoi(argv[1]);


        string plaintext=get_string("plaintext: ");
        ciphertext=plaintext;


        for (int j=0; j<strlen(plaintext);j++)
        {
            if (((int)plaintext[j]+(x%26))>90 && (((int)plaintext[j]+(x%26))<97))
            {
                ciphertext[j]=((plaintext[j]+(x%26))-26);
            }
            else if (((int)plaintext[j]+(x%26))>122)
            {
                ciphertext[j]=((plaintext[j]+(x%26))-26);
            }
            else if (((int)plaintext[j]+(x%26))>=0 && ((int)plaintext[j]+(x%26))<=65)
            {
                ciphertext[j]=plaintext[j];
            }
            else
            {
                ciphertext[j]=((plaintext[j]+(x%26)));
            }


        }
        printf("ciphertext: %s\n",ciphertext);


    }
    else

    {
        printf("Usage: ./caeser KEY\n");
        return 1;
    }
    }
    else
    {
        printf("Usage: ./caeser KEY\n");
        return 1;
    }
}

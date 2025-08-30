#include <cs50.h>
#include <stdio.h>

long card;
int count=0;
long exponent=1;
int i=0;
int Sum=0;
int Multiply=0;
int luhn_algorithm(long f);
int countdigit(long n);
void CardCompany(long k);
long Exponent(int x);

int main(void)
{

    card = get_long("Enter the Card Number: ");
    countdigit(card);
    CardCompany(card);
    //printf("%i\n",count);

}

int countdigit(long n)
{
    while (n>0)
    {
        n/=10;
        count++;
    }
    return count;
}

void CardCompany(long k)
{
  if (luhn_algorithm(k)%10==0)
   {
    if ((count==15) && (k/Exponent(count) == 37 || k/Exponent(count) == 34) )
    {
        printf("AMEX\n");
    }
    else if((count==13 || count==16) && (k/Exponent(count+1) == 4))
    {
        printf("VISA\n");
    }
    else if((count==16) && (k/Exponent(count) == 51 || k/Exponent(count) == 52 || k/Exponent(count) == 53 || k/Exponent(count) == 54 || k/Exponent(count) == 55 ) )
    {
        printf("MASTERCARD\n");
    }
    else
    {
        printf("INVALID\n");
    }
   }
  else
  {
    printf("INVALID\n");
  }
}

long Exponent(int x)
{
    exponent=1;
    for (i=0;i<(x-2);i++)
    {
        exponent*=10;
    }
    return exponent;

}

int luhn_algorithm(long f)
{
   Sum=0;
   Multiply=0;

    while(f>0)
   {
    for(i=0;i<count;i+=2)
    {
      Sum += (f%10);
      f=f/100;
      //printf("%i Sum:\n",Sum);
      //printf("%li f: \n",f);
    }
    f=card/10;
    for(i=0;i<count;i+=2)
    {
      if((f%10)*2>9)
      {
        Multiply += (((f%10)*2)/10)+(((f%10)*2)%10);
      }
      else
      {
            Multiply += (f%10)*2;
      }

      f=f/100;
      //printf("%i Multiply:\n",Multiply);
      //printf("%li f: \n",f);
    }
   }
   //printf("%i Sum+Multiply\n:",Sum+Multiply);
   return Sum+Multiply;

}



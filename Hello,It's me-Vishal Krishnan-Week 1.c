#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Enter a Name: ");

    printf("hello, %s\n", name);
}

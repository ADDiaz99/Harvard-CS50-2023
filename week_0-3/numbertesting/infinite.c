#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long int infinite = 0;

    while(infinite >= 0)
    {
        infinite += 1;
        //infinite += 132321123;
        printf("%li\n", infinite);
    }
}

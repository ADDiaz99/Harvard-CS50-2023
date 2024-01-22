#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt the user for their credit card number
    long creditcard;
    do
    {
        creditcard = get_long("Number: ");
    }
    while (creditcard <= 0);
    return creditcard;
    //End prompt and continue

    

}
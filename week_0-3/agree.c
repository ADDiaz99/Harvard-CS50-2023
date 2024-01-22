#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char a = get_char("Do you agree and want to continue? (Y/n) ");

    if (a == 'y' || a == 'Y')
    {
        printf("Proceeding...\n");
    }
    else if (a == 'n' || a == 'N')
    {
        printf("Terminating...\n");
    }
    else
    {
        printf("Please specify your agreement with a valid input (Y,y/N,n)\n");
        return 0;
    }
}
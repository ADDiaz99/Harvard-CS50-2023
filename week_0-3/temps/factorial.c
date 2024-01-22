#include <cs50.h>
#include <stdio.h>

int factorial();

int main(void)
{
    int n = get_int("Enter the number you want to factorial: ");

    printf("%i\n", factorial(n));
    return 0;
}

int factorial(int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // recursive case
    else
    {
        return n * factorial(n - 1);
    }
}

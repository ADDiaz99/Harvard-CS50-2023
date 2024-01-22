#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num1 = get_int("Introduce a number: ");
    int num2 = get_int("Introduce the second number: ");
    if (num1 == num2)
    {
        printf("%d and %d are equal\n", num1, num2);
    }
    else if (num1 > num2)
    {
        printf("%d is greater than %d\n", num1, num2);
    }
    else
    {
        printf("%d in lower than %d\n", num1, num2);
    }

}

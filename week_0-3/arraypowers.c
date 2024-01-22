#include <math.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Enter the size of the array: ");
    }
    while (n <= 0);


    int array[n];
    array[0] = 1;
    printf("%i\n", array[0]);       //Print the first position, set to 1 to avoid multiplying by 0

    for (int i = 1; i < n; i++)     //Print the rest of the array
    {
        array[i] = 2 * array[i - 1];//Print twice the previous element
        printf("%i\n", array[i]);
    }
}

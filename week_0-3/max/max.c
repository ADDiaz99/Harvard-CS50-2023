// Practice writing a function to find a max value

#include <cs50.h>
#include <stdio.h>

int max(int arr[], int n, int size);

int main(void)
{
    int n;
    do
    {
        n = get_int("Number of elements: ");
    }
    while (n < 1);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = get_int("Element %i: ", i);
    }

    int size = sizeof(arr) / sizeof(arr[0]);

    printf("The max value is %i.\n", max(arr, n, size));
}

// TODO: return the max value
int max(int arr[], int n, int size)
{
    int max = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

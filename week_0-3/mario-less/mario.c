#include <cs50.h>
#include <stdio.h>

int get_height(void);
void print_pyramid(int height);

int main(void)
{
    int n = get_height();
    print_pyramid(n);
}

int get_height(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    return n;
}

void print_pyramid(int height)
{

    for (int i = 1; i <= height; i++)
    {

        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
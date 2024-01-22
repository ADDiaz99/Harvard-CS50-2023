#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // n = number of llamas, each year n/3 llamas are born and n/4 llamas die.
    // TODO: Prompt for start size
    long start_size;
    do
    {
        start_size = get_long("Start size: ");
    }
    while (start_size < 9);

    // TODO: Prompt for end size
    long end_size;
    do
    {
        end_size = get_long("End size: ");
    }
    while (end_size < start_size);
    // TODO: Calculate number of years until we reach threshold

    long n = start_size;
    int years = 0;
    for (int i = 0; n < end_size; i++)
    {
        if (start_size == end_size)
        {
            years = 0;
        }
        else
        {
            n += (n / 3) - (n / 4);
            years += 1;
        }
    }
    // TODO: Print number of years
    printf("Years: %i\n", years);
}

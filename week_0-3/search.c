#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    //int n = get_int("Number: ");

    string strings[] = {"battleship","boot","cannon","iron","thimble","top hat"};

    string s = get_string("String: ");

    for (int i = 0; i < 6; i++)     // Hardcoded size, careful.
    {
        if (strcmp(strings[i], s) == 0) //strcmp() compares to string, if the result is 0 it means they are the same,
        {                               //if it's negative or positive, it correlates to their alphabetical order.
            printf("Found!\n");
            return 0;
        }
    }
    printf("Not found :(\n");
    //End of the program
    return 0;
}

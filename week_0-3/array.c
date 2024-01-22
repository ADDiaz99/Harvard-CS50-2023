#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //int request = get_int("Introduce un numero: ");
    //int letras[] = {'a','b','c','d','e','f'};
    //printf("letra elegida: %c\n", (char) letras[request] - 32);

    int ages[5];

    for (int i = 0; i < 5; i++)
    {
        ages[i] = get_int("Introduce age: ");
    }
    for (int j = 0; j < 5; j++)
    {
        printf("Ages are: %i\n", ages[j]);
    }

}

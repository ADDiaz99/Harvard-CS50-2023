#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int n = 50; // Variable
                //  &n = address of n
    int *p = &n; // Pointer of the variable
    printf("Variable: %i\n", n);
    printf("Address: %p\n", p); // %p = pointer (address of where the int is stored in memory)


    typedef char * palabra; //typedef can change any type to any name we want

    palabra pepe = "pepe";
    printf("%s\n", pepe);
    printf("\n\n\n");

    char *s = "Milk";

    printf("%p\n", s);
    printf("%p\n", &s[1]);  //If we want to specify a particular position, we need to get its address first by using "&"
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
    printf("\n\n");

    for (int i = 0; i < strlen(s); i++)
    {
        printf("%p\n", &s[i]);
    }

    int CAJA[] = {5, 2, 24, 36, 12};
    int size = sizeof(CAJA) / sizeof(CAJA[0]);

    printf("Size of array: %i\n", size);
}

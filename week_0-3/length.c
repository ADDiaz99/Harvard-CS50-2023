#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int cantidad = 0;

    string nombre = get_string("Cual es tu nombre: ");

    while(nombre[cantidad] != '\0')
    {
        cantidad++;
    }
    printf("Tu nombre: %s, tiene %i letras.\n", nombre, cantidad);
}

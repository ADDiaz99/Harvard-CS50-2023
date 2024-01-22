#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long a = get_long("Introduce a number: ");
    long b = get_long("Introduce a number: ");

    float z = (float) a / (float) b;
    printf("%f\n", z);
    //printf("%li\n", a + b);
}
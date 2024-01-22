#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char rotate(char c, int n);

int main(int argc, string argv[])
{
    // Make sure program is going to run with just one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // Make sure every character in argv[1] is a digit
    string key_str = argv[1];
    for (int i = 0; i < strlen(key_str); i++)
    {
        if (isdigit(key_str[i])) // If it finds anything that is not a digit in the array, it stops the program
        {
            continue;
        }
        else
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    // printf("Key is: %s\n", key);
    //  Convert argv[1] from a `string` to an `int`
    int key_int = atoi(key_str);
    // Prompt user for plaintext
    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");

    // For each character in the plaintext:
    for (int i = 0; i < strlen(plaintext); i++)
    {
        // Rotate the character if it's a letter
        if (isalpha(plaintext[i]))
        {
            printf("%c", rotate(plaintext[i], key_int));
        }
        else
        {
            printf("%c", plaintext[i]); // if it isn't, just print the char
        }
    }
    printf("\n");
    return 0;
}

char rotate(char c, int n) // This function works by rotating the position of the letters by the number of the key
{
    if (isalpha(c))
    {
        if (islower(c))
        {
            c -= 97;          // First we reduce them to a base 0 alphabet
            c = (c + n) % 26; // then we do the formula for enabling going around the alphabet
            c += 97;          // we undo the reduce-to-0, that way the computer understands it.
        }
        else
        {
            c -= 65;
            c = (c + n) % 26;
            c += 65;
        }
    }
    return c; // then we return the character
}

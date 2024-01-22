// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    string word = argv[1];

    if (argc != 2)
    {
        printf("Incorrect Input: No input received or typed more than one word.\n");
        return 1;
    }

    //Count the letters one by one to get the size
    int size = 0;
    while(word[size] != '\0')
    {
        size++;
    }
    printf("Your word has %i letters\n", size);
    printf("------------L33tsp36k------------\n");

    for (int i = 0; i < size; i++)
    {
        switch (word[i])
        {
            case 'a':
                printf("%c", '6');
                break;
            case 'e':
                printf("%c", '3');
                break;
            case 'i':
                printf("%c", '1');
                break;
            case 'o':
                printf("%c", '0');
                break;

            case 'A':
                printf("%c", '6');
                break;
            case 'E':
                printf("%c", '3');
                break;
            case 'I':
                printf("%c", '1');
                break;
            case 'O':
                printf("%c", '0');
                break;

            default:
                printf("%c", word[i]);
        }
    }
    printf("\n");
}

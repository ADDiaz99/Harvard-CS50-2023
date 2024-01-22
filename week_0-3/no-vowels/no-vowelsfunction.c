// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>

int replace(string);

int main(int argc, string argv[])
{
    string word = argv[1];

    if (argc != 2)
    {
        printf("Incorrect Input: No input received or typed more than one word.\n");
        return 1;
    }

    replace(word);
}

int replace(string word)
{
    //Implement size counter
    int size = 0;
    while(word[size] != '\0')
    {
        size++;
    }

    //Now knowing how long the array is, we can use a for loop to iterate through each letter and replace it as necessary
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
    return 0;
}




#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int count_letters();
int count_words();
int count_sentences();

int main(void)
{
    //Get string input from the user
    string text = get_string("Text: ");


    printf("%i Letters\n", count_letters(text));
    printf("%i Words\n", count_words(text));
    printf("%i Sentences\n", count_sentences(text));

    return 0;
}

int count_letters(string text)      //Function used to count the amount of alphabetical characters in a string
{
    int letter_amount = 0;
    int size = 0;

    while (text[size] != '\0')      //First get the size of the array
    {
        size++;
    }
    //----------------------------
    for (int i = 0; i < size; i++)
    {
        if (isalpha(text[i]))       //Check if its alphabetical or not
        {
            letter_amount++;        //If it is, amount++
        }
    }

    return letter_amount;
}

int count_words(string text)
{
    int word_amount = 1;
    int size = 0;
    if (strlen(text) == 0)
    {
        return 0;
    }
    while (text[size] != '\0')
    {
        size++;
    }

    //----------------------------
    for (int i = 0; i < size; i++)
    {
        if (isblank(text[i]))
        {
            word_amount++;
        }
    }
    return word_amount;
}

int count_sentences(string text)
{
    int sentence_amount = 0;
    int size = 0;

    if (strlen(text) == 0)
    {
        return 0;
    }

    while(text[size] != '\0')
    {
        size++;
    }

    for (int i = 0; i < size; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentence_amount++;
        }
    }
    return sentence_amount;
}

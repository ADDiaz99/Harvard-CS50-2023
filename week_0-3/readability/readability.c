#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters();
int count_words();
int count_sentences();

int main(void)
{
    // Get string input from the user
    string text = get_string("Text: ");

    // printf("%i Letters\n", count_letters(text));
    int letters = count_letters(text);
    // printf("%i Words\n", count_words(text));
    int words = count_words(text);
    // printf("%i Sentences\n", count_sentences(text));
    int sentences = count_sentences(text);

    // Time to calculate the index, remember that: index = (0.0588 * L - 0.296 * S - 15.8)
    float L = 0;
    float S = 0;

    // L is the average number of letters per 100 words in the text
    L = ((float) letters / (float) words) * 100;
    // S is the average number of sentences per 100 words in the text
    S = ((float) sentences / (float) words) * 100;

    float index_before_round = (0.0588 * L - 0.296 * S - 15.8);
    int index = round(index_before_round);

    // Outputting the grade calculation

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
    return 0;
}

int count_letters(string text) // Function used to count the amount of alphabetical characters in a string
{
    int letter_amount = 0;
    int size = 0;

    while (text[size] != '\0') // First get the size of the array
    {
        size++;
    }
    //----------------------------
    for (int i = 0; i < size; i++)
    {
        if (isalpha(text[i])) // Check if its alphabetical or not
        {
            letter_amount++; // If it is, amount++
        }
    }

    return letter_amount;
}

int count_words(string text) // Function used to count the blank spaces (simulating what is between words) in a string
{
    int word_amount = 1; // Starts in 1 to count the last word in the string
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
        if (isblank(text[i])) // Counts every blank and increases the amount of words
        {
            word_amount++;
        }
    }
    return word_amount;
}

int count_sentences(string text) // Function used to count the amount of ". ! ?" in a string
{
    int sentence_amount = 0;
    int size = 0;

    if (strlen(text) == 0)
    {
        return 0;
    }

    while (text[size] != '\0')
    {
        size++;
    }

    for (int i = 0; i < size; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?') // Each time if finds one, adds 1 to the amount of sentences
        {
            sentence_amount++;
        }
    }
    return sentence_amount;
}

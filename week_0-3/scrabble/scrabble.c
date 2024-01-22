#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    printf("Score 1: %i\n", score1);
    printf("Score 2: %i\n", score2);
    
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 == score2)
    {
        printf("Tie!\n");
    }
    else
    {
        printf("Player 2 wins!\n");
    }
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int totalscore = 0;

    // Figure out how long the string is
    int size = 0;
    while (word[size] != '\0')
    {
        size++;
    }
    //----------------------------------
    for (int i = 0; i < size; i++)
    {
        switch (tolower(word[i])) // make every letter lowercase before starting to count
        {
            case 'a':
                totalscore += POINTS[0];
                break;
            case 'b':
                totalscore += POINTS[1];
                break;
            case 'c':
                totalscore += POINTS[2];
                break;
            case 'd':
                totalscore += POINTS[3];
                break;
            case 'e':
                totalscore += POINTS[4];
                break;
            case 'f':
                totalscore += POINTS[5];
                break;
            case 'g':
                totalscore += POINTS[6];
                break;
            case 'h':
                totalscore += POINTS[7];
                break;
            case 'i':
                totalscore += POINTS[8];
                break;
            case 'j':
                totalscore += POINTS[9];
                break;
            case 'k':
                totalscore += POINTS[10];
                break;
            case 'l':
                totalscore += POINTS[11];
                break;
            case 'm':
                totalscore += POINTS[12];
                break;
            case 'n':
                totalscore += POINTS[13];
                break;
            case 'o':
                totalscore += POINTS[14];
                break;
            case 'p':
                totalscore += POINTS[15];
                break;
            case 'q':
                totalscore += POINTS[16];
                break;
            case 'r':
                totalscore += POINTS[17];
                break;
            case 's':
                totalscore += POINTS[18];
                break;
            case 't':
                totalscore += POINTS[19];
                break;
            case 'u':
                totalscore += POINTS[20];
                break;
            case 'v':
                totalscore += POINTS[21];
                break;
            case 'w':
                totalscore += POINTS[22];
                break;
            case 'x':
                totalscore += POINTS[23];
                break;
            case 'y':
                totalscore += POINTS[24];
                break;
            case 'z':
                totalscore += POINTS[25];
                break;
            default:
                totalscore += 0;
        }
    }
    return totalscore;
}

#include <cs50.h>
#include <stdio.h>

typedef struct
{
    string name;
    int votes;
}
candidate;

int main(void)
{
    candidate candidates[4];

    for (int i = 1;i < 4; i++)
    {
        candidates[i].name = get_string("Insert name for Candidate %i: ", i);
        candidates[i].votes = get_int("Insert votes for Candidate %i: ", i);
    }
    printf("Registering values...\n");

    for (int i = 1; i < 4; i++)
    {
        printf("%s has %i votes.\n", candidates[i].name, candidates[i].votes);
    }

    return 0;
}

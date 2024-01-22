#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct // Create a new type of structure called person, with 2 strings each
{
    string name;
    string number;
} person; // name of the type

int main(void)
{
    // string names[] = {"David", "Nicole"};
    // string numbers[] = {"+57-323-469-4341", "+57-313-362-6546"};

    person people[3]; // we establish that there are 2 people

    people[0].name = "David";
    people[0].number = "+57-323-469-4341";
    // This is the way we access data on each person
    people[1].name = "Nicole";
    people[1].number = "+57-313-362-6546";

    people[2].name = "Stpefanny";
    people[2].number = "+57-350-225-8080";

    string name = get_string("Name: ");

    for (int i = 0; i < 3; i++) // hardcoded size, careful.
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s's Number: %s\n", name, people[i].number);
            return 0;
        }
    }
    printf("Name not found in phonebook.\n");
    return 1;
}

#include <cs50.h>
#include <stdio.h>

typedef struct
{
    int id;
    char *item;
    int price;
} menu_item;

#define NUM_ITEMS 8
menu_item menu[NUM_ITEMS];

void add_items();
int get_cost(int id);

int main(void)
{
    add_items();

    printf("\n\n\n######################--- Welcome to Miranda's Lasagna & Bar ---######################\n\n");
    printf("\n\t\tWe offer a varied selection of dishes, drinks, and desserts\n\t\tLet's take your order!\n");
    printf("\nThis is our menu, choose by entering the number before each dish:\n");
    printf("Enter the number 0 to finish your order.\n");

    for (int i = 0; i < NUM_ITEMS; i++)
    {
        printf("%i. %s........$%i\n", menu[i].id, menu[i].item, menu[i].price);
    }

    int bill = 0;
    int order_count = 0;
    menu_item ordered_items[NUM_ITEMS]; // Array to store ordered items

    while (true)
    {
        int input = get_int("Which one would you like to order? -> ");

        if (input == 0)
        {
            printf("\n");
            break;
        }

        // Add the cost to the bill
        for (int i = 0; i < NUM_ITEMS; i++)
        {
            if (input == menu[i].id)
            {
                bill += menu[i].price;
                ordered_items[order_count++] = menu[i]; // Store ordered item
                printf("Added %s to your order. $%i\n", menu[i].item, menu[i].price);
            }
        }

        char decision_01 = get_char("Would you like to order anything else? (y/n) ");
        if (decision_01 != 'y' && decision_01 != 'Y')
        {
            break;
        }
    }

    printf("\nYour order:\n");
    for (int i = 0; i < order_count; i++)
    {
        printf("%i. %s........$%i\n", ordered_items[i].id, ordered_items[i].item, ordered_items[i].price);
    }

    printf("\nYour total bill is: $%i\n", bill);

    return 0;
}

void add_items()
{
    // Your menu initialization code remains the same
    menu[0].id = 1;
    menu[0].item = "Lasagna";
    menu[0].price = 19500;

    menu[1].id = 2;
    menu[1].item = "Steak";
    menu[1].price = 35500;

    menu[2].id = 3;
    menu[2].item = "Spaghetti";
    menu[2].price = 22150;

    menu[3].id = 4;
    menu[3].item = "Filet Mignon";
    menu[3].price = 49900;

    menu[4].id = 5;
    menu[4].item = "Water Bottle";
    menu[4].price = 2500;

    menu[5].id = 6;
    menu[5].item = "Coca-Cola";
    menu[5].price = 4900;

    menu[6].id = 7;
    menu[6].item = "Vanilla Ice Cream";
    menu[6].price = 12300;

    menu[7].id = 8;
    menu[7].item = "Chocolate Ice Cream";
    menu[7].price = 13300;
}

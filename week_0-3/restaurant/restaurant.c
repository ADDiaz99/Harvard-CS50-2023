/*restaurant.c
Interactive menu with prices and payment, navigate with the numpad
*/
//te quedo super chevere el menu mi amor, pero faltas tu en el para que mi orden este completa, teamo -N
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

// Add items to menu
void add_items_EN();
void add_items_ES();
// Get size of array:
int size = sizeof(menu) / sizeof(menu[0]);
// Calculate total cost (UNUSED FUNCTION)
//int get_cost(int id);

int main(void)
{
    printf("Restaurant.c\n");
    int language;
    language = get_int("\nWelcome/Bienvenid@\nPress 1 for English\nPresione 2 para Español\n-> ");

    if (language == 1)
    {
        //ENGLISH
        // Adding the Items to main
        add_items_EN();
        // Introduction
        printf("\n\n\n######################--- Welcome to Miranda's Lasagna & Bar ---######################\n\n");
        printf("\n\t\tWe offer a varied selection of dishes, drinks and desserts\n\t\tLet's take your order!\n");
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

            //Add the cost to the bill
            for (int i = 0; i < NUM_ITEMS; i++)
            {
                if (input == menu[i].id)
                {
                    bill += menu[i].price;
                    // NOTIFY USER WHAT HE JUST ADDED
                    // Adds new item to the cart array
                    ordered_items[order_count++] = menu[i];
                    printf("Added %s to your order.\n", menu[i].item);

                }
            }

            char desicion_01 = get_char("Would you like to order anything else? (y/n) ");
            if (desicion_01 == 'y' || desicion_01 == 'Y')
            {
                continue;
            }
            else
            {
                break;
            }

        }

        printf("\nYour order:\n\n");
        //Iterates through the array that stored every item the client ordered
        for (int i = 0; i < order_count; i++)
        {
            printf("%s........$%i\n", ordered_items[i].item, ordered_items[i].price);
        }

        printf("\n\tYour total bill is: $%i\n\n", bill);

        return 0;
    }

    else if (language == 2)
    {
        //ESPAÑOL
        // Adding the Items to main
        add_items_ES();
        // Introduction
        printf("\n\n\n######################--- Bienvenid@ a Miranda's Lasagna & Bar ---######################\n\n");
        printf("\n\t\tOfrecemos un menú variado de platos, bebidas y postres\n\t\t¡Vamos a tomar tu orden!\n");
        printf("\nEste es nuestro Menu, añade al carrito ingresando el numero antes del plato:\n");
        printf("Ingresa 0 para finalizar tu orden, o ""n"" cuando el sistema pregunte si deseas algo más.\n");

        for (int i = 0; i < NUM_ITEMS; i++)
        {
            printf("%i. %s........$%i\n", menu[i].id, menu[i].item, menu[i].price);
        }

        int bill = 0;
        int order_count = 0;
        menu_item ordered_items[NUM_ITEMS]; // Array to store ordered items

        while (true)
        {
            int input = get_int("¿Que te gustaría ordenar? -> ");

            if (input == 0)
            {
                printf("\n");
                break;
            }

            //Add the cost to the bill
            for (int i = 0; i < NUM_ITEMS; i++)
            {
                if (input == menu[i].id)
                {
                    bill += menu[i].price;
                    // NOTIFY USER WHAT HE JUST ADDED
                    // Adds new item to the cart array
                    ordered_items[order_count++] = menu[i];
                    printf("Añadiste %s a tu orden.\n", menu[i].item);

                }
            }

            char desicion_01 = get_char("¿Te gustaría añadir algo más? (s/n) ");
            if (desicion_01 == 's' || desicion_01 == 'S')
            {
                continue;
            }
            else
            {
                break;
            }

        }

        printf("\nTu orden:\n\n");
        //Iterates through the array that stored every item the client ordered
        for (int i = 0; i < order_count; i++)
        {
            printf("%s........$%i\n", ordered_items[i].item, ordered_items[i].price);
        }

        printf("\n\tTotal de la compra: $%i\n\n", bill);

        return 0;
    }

    else
    {
        printf("Error: Wrong Input");
        return 0;
    }


}

void add_items_EN()
{
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

void add_items_ES()
{
    menu[0].id = 1;
    menu[0].item = "Lasaña";
    menu[0].price = 19500;

    menu[1].id = 2;
    menu[1].item = "Churrasco";
    menu[1].price = 35500;

    menu[2].id = 3;
    menu[2].item = "Spaghetti";
    menu[2].price = 22150;

    menu[3].id = 4;
    menu[3].item = "Filet Mignon";
    menu[3].price = 49900;

    menu[4].id = 5;
    menu[4].item = "Agua Mineral";
    menu[4].price = 2500;

    menu[5].id = 6;
    menu[5].item = "Coca-Cola";
    menu[5].price = 4900;

    menu[6].id = 7;
    menu[6].item = "Helado de Vainilla";
    menu[6].price = 12300;

    menu[7].id = 8;
    menu[7].item = "Helado de Chocolate";
    menu[7].price = 13300;
}

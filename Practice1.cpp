#include <iostream>

const int catSize {20}; // Category Size for each precious metaL in m^3.
using std::cout, std::cin;

/*
    I want this inventory to be able to add and decrease from the given category size.
    The user will be prompted to select the metal they wish to deposit or withdraw to.
    The user will then be shown the initial inventory size, and the size after.
    If they want to deposit more than the available space, they will be given an
    size warning, telling them the available space, and the max they can do.


*/
struct Inventory
{
    int platinum[catSize];   // 20 per metal representing m^3 of area (volume)
    int gold[catSize];
    int diamond[catSize];
    int silver[catSize];
    int copper[catSize];
};

enum Metals {
    PLATINUM=1,
    GOLD,
    DIAMOND,
    SILVER,
    COPPER,
    EXIT
};


int main() {

    int choice{}; 
    Inventory g;

    cout << "Welcome to Ray's Inventory\n";
    cout << "Please select the precious metal you wish to deposit or withdraw from:\n";
    cout << "1. Platinum\n";
    cout << "2. Gold\n";
    cout << "3. Diamond\n";
    cout << "4. Silver\n";
    cout << "5. Copper\n";
    cout << "\n6. EXIT\n";

    while (choice != EXIT)
    {
        cout << "Enter your choice: ";
        cin >> choice;
        std::cin.ignore(1000, '\n');

    switch (choice)
    {
    case PLATINUM:
        {
            int balance {};
            balance = sizeof(g.platinum)/sizeof(g.platinum[0]);
            cout << "Available Size in Cubic Meters is: " << balance << '\n';
            cout << "";
            break;
        }
    case GOLD:
        {
            int balance {};
            balance = sizeof(g.gold)/sizeof(g.gold[0]);
            cout << "Available Size in Cubic Meters is: " << balance << '\n';
            break;
        }
    case DIAMOND:
        {   int balance {};
            balance = sizeof(g.diamond)/sizeof(g.diamond[0]);
            cout << "Available Size in Cubic Meters is: " << balance << '\n';
            break;
        }   
    case SILVER:
        {
            int balance {};
            balance = sizeof(g.silver)/sizeof(g.copper[0]);
            cout << "Available Size in Cubic Meters is: " << balance << '\n';
            break;
        }
    case COPPER:
        {
            int balance {};
            balance = sizeof(g.copper)/sizeof(g.copper[0]);
            cout << "Available Size in Cubic Meters is: " << balance << '\n';
            break;
        }
    case EXIT:
        {
            exit;
            break;
        }

    default:
        {
        cout << "\nPlease select a NUMBER between 1-5!\n";
        break;
        }
}
    }

    return 0;
}
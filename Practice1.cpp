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
    int platinum {};   // 20 per metal representing m^3 of area (volume)
    int gold {};
    int diamond {};
    int silver {};
    int copper {};
}; 

enum Metals {
    EXIT,
    PLATINUM,
    GOLD,
    DIAMOND,
    SILVER,
    COPPER
};


int main() {

    int choice {}; 
    Inventory g;

    cout << "Welcome to Ray's Inventory\n";

    while (true)
    {

        cout << "\nPlease select the prescious metal you wish to deposit or withdraw from:\n";
        cout << "1. Platinum\n";
        cout << "2. Gold\n";
        cout << "3. Diamond\n";
        cout << "4. Silver\n";
        cout << "5. Copper\n";
        cout << "0. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        if (cin.fail()) {
             cin.clear(); // clear fail state
             cin.ignore(1000, '\n'); // discard bad input
             cout << "\nInvalid input. Please enter a number.\n";
        }
    
        else 
        {

        switch (choice) 
        {

        case PLATINUM:
        {
            int choice1 {};
            while (true)
            {
            cout << "\nCurrent Balance is " << g.platinum;
            cout << "\nDo you want to deposit or withdraw? ";
            cout << "\n1. Deposit";
            cout << "\n2. Withdraw";
            cout << "\n3. Main Menu";
            cout << "\nChoice: ";
            cin >> choice1;

            if (cin.fail()) 
            {
             cin.clear(); // clear fail state
             cin.ignore(1000, '\n'); // discard bad input
             cout << "Invalid input. Please enter a number.\n";
            }
            
            else if (choice1 == 1)
            {
                int depoAmt {};
                cout << "\nEnter deposit amount: ";
                cin >> depoAmt;

                g.platinum += depoAmt;
                cout << "\nNew Balance: " << g.platinum << '\n';

            }

            else if (choice1 == 2)
            {
                int withdrawAmt {};
                cout << "\nEnter amount to withdraw: ";
                cin >> withdrawAmt;
                g.platinum -= withdrawAmt;
                cout << "\nNew Balance: " << g.platinum << '\n';
            }

            else if (choice1 == 3)
            {
                break;
            }

            else
            {
                cout << "\nPlease enter a number between 1-3!\n";
            }
        }

            break;
        }
        case GOLD:
        {

            int choice1 {};
            while (true)
            {
            cout << "\nCurrent Balance is " << g.gold;
            cout << "\nDo you want to deposit or withdraw? ";
            cout << "\n1. Deposit";
            cout << "\n2. Withdraw";
            cout << "\n3. Main Menu";
            cout << "\nChoice: ";
            cin >> choice1;
            
            if (cin.fail()) {
             cin.clear(); // clear fail state
             cin.ignore(1000, '\n'); // discard bad input
             cout << "Invalid input. Please enter a number.\n";
            }

            else if (choice1 == 1)
            {
                int depoAmt {};
                cout << "\nEnter deposit amount: ";
                cin >> depoAmt;

                g.gold += depoAmt;
                cout << "\nNew Balance: " << g.gold << '\n';

            }

            else if (choice1 == 2)
            {
                int withdrawAmt {};
                cout << "\nEnter amount to withdraw: ";
                cin >> withdrawAmt;
                g.gold -= withdrawAmt;
                cout << "\nNew Balance: " << g.gold << '\n';
            }

            else if (choice1 == 3)
            {
                break;
            }

            else
            {
                cout << "\nPlease enter a number between 1-3!\n";
            }
        }

            break;
        }
        case DIAMOND:
        {   
            int choice1 {};
            while (true)
            {
            cout << "\nCurrent Balance is " << g.diamond;
            cout << "\nDo you want to deposit or withdraw? ";
            cout << "\n1. Deposit";
            cout << "\n2. Withdraw";
            cout << "\n3. Main Menu";
            cout << "\nChoice: ";
            cin >> choice1;
            
            if (cin.fail()) 
            {
             cin.clear(); // clear fail state
             cin.ignore(1000, '\n'); // discard bad input
             cout << "Invalid input. Please enter a number.\n";
            }

            else if (choice1 == 1)
            {
                int depoAmt {};
                cout << "\nEnter deposit amount: ";
                cin >> depoAmt;

                g.diamond += depoAmt;
                cout << "\nNew Balance: " << g.diamond << '\n';

            }

            else if (choice1 == 2)
            {
                int withdrawAmt {};
                cout << "\nEnter amount to withdraw: ";
                cin >> withdrawAmt;
                g.diamond -= withdrawAmt;
                cout << "\nNew Balance: " << g.diamond << '\n';
            }
            
            else if (choice1 == 3)
            {
                break;
            }

            else
            {
                cout << "\nPlease enter a number between 1-3!\n";
            }
        }

            break;
        }   
        case SILVER:
        {

            int choice1 {};
            while (true)
            {
            cout << "\nCurrent Balance is " << g.silver;
            cout << "\nDo you want to deposit or withdraw? ";
            cout << "\n1. Deposit";
            cout << "\n2. Withdraw";
            cout << "\n3. Main Menu";
            cout << "\nChoice: ";
            cin >> choice1;
            
            if (cin.fail()) 
            {
             cin.clear(); // clear fail state
             cin.ignore(1000, '\n'); // discard bad input
             cout << "Invalid input. Please enter a number.\n";
            }

            else if (choice1 == 1)
            {
                int depoAmt {};
                cout << "\nEnter deposit amount: ";
                cin >> depoAmt;

                g.silver += depoAmt;
                cout << "\nNew Balance: " << g.silver << '\n';

            }

            if (choice1 == 2)
            {
                int withdrawAmt {};
                cout << "\nEnter amount to withdraw: ";
                cin >> withdrawAmt;
                g.silver -= withdrawAmt;
                cout << "\nNew Balance: " << g.silver << '\n';
            }

            else if (choice1 == 3)
            {
                break;
            }

            else
            {
                cout << "\nPlease enter a number between 1-3!\n";
            }
        }

            break;
        }
        case COPPER:
        {

            int choice1 {};
            while (true)
            {
            cout << "\nCurrent Balance is " << g.copper;
            cout << "\nDo you want to deposit or withdraw? ";
            cout << "\n1. Deposit";
            cout << "\n2. Withdraw";
            cout << "\n3. Main Menu";
            cout << "\nChoice: ";
            cin >> choice1;
            
            if (cin.fail()) 
            {
             cin.clear(); // clear fail state
             cin.ignore(1000, '\n'); // discard bad input
             cout << "Invalid input. Please enter a number.\n";
            }

            else if (choice1 == 1)
            {
                int depoAmt {};
                cout << "\nEnter deposit amount: ";
                cin >> depoAmt;

                g.copper += depoAmt;
                cout << "\nNew Balance: " << g.copper << '\n';

            }

            else if (choice1 == 2)
            {
                int withdrawAmt {};
                cout << "\nEnter amount to withdraw: ";
                cin >> withdrawAmt;
                g.copper -= withdrawAmt;
                cout << "\nNew Balance: " << g.copper << '\n';
            }

            else if (choice1 == 3)
            {
                break;
            }

            else
            {
                cout << "\nPlease enter a number between 1-3!\n";
            }
        }

            break;
        }
        case EXIT:
        {
            return 0;
        }
        default:
        {
        cout << "\nPlease select a NUMBER between 1-5!\n";
        break;
        }
    }
}
    }
}

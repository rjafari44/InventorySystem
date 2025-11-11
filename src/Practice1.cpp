#include <iostream>

using std::cout, std::cin;

/*
    I want this inventory to be able to add and decrease from the given category size.
    The user will be prompted to select the metal they wish to deposit or withdraw to.
    The user will then be shown the initial inventory size, and the size after.
    If they want to deposit more than the available space, they will be given an
    size warning, telling them the available space, and the max they can do.


*/

const int MAX_LIMIT {100};

struct Inventory {
    int platinum {}, gold {}, diamond {}, silver {}, copper {};
}; 

enum Metals {
    EXIT, PLATINUM, GOLD, DIAMOND, SILVER, COPPER
};

enum Operation {
    QUIT, DEPOSIT, WITHDRAW, MAIN_MENU
};

void displayMenu1();
void displayMenu2();
bool isValidDeposit(int depoAmt, int currentBalance);
bool isValidWithdrawal(int withdrawAmt, int currentBalance);

int main() {

    int choice {}; 
    Inventory g;

    cout << "Welcome to Ray's Inventory\n";

    while (true) {

        displayMenu1();
        cin >> choice;
        
        if (cin.fail()) {
             cin.clear(); // clear fail state
             cin.ignore(1000, '\n'); // discard bad input
             cout << "\nInvalid input. Please enter a number.\n";
        }
    
        else {

        switch (choice) {

        case PLATINUM: {

            int choice1 {};

            while (true) {

            cout << "\nCurrent Balance is " << g.platinum;
            displayMenu2();
            cin >> choice1;

            if (cin.fail()) {
             cin.clear(); // clear fail state
             cin.ignore(1000, '\n'); // discard bad input
             cout << "Invalid input. Please enter a number.\n";
            }
            
            else if (choice1 == DEPOSIT) {
                int depoAmt {};
                cout << "\nEnter deposit amount: ";
                cin >> depoAmt;

                if (cin.fail()) {
                    cin.clear(); // clear fail state
                    cin.ignore(1000, '\n'); // discard bad input
                    cout << "\nInvalid input. Please enter a number.\n";
                } else {
                    if (isValidDeposit(depoAmt, g.platinum)) {
                        g.platinum += depoAmt;
                        cout << "\nNew Balance: " << g.platinum << '\n';
                    } else {
                        cout << "\nInvalid deposit amount\n";
                    }
                }
            }

            else if (choice1 == WITHDRAW) {
                int withdrawAmt {};
                cout << "\nEnter amount to withdraw: ";
                cin >> withdrawAmt;

                if (cin.fail()) {
                    cin.clear(); // clear fail state
                    cin.ignore(1000, '\n'); // discard bad input
                    cout << "\nInvalid input. Please enter a number.\n";
                } else {
                    if (isValidWithdrawal(withdrawAmt, g.platinum)) {
                        g.platinum -= withdrawAmt;
                        cout << "\nNew Balance: " << g.platinum << '\n';
                    } else {
                        cout << "\nInvalid withdrawal amount\n";
                    }
                }
            }

            else if (choice1 == MAIN_MENU) {
                break;
            }

            else {
                cout << "\nPlease enter a number between 1-3!\n";
            }
        }

            break;
        }
        case GOLD: {

            int choice1 {};

            while (true) {
            cout << "\nCurrent Balance is " << g.gold;
            displayMenu2();
            cin >> choice1;
            
            if (cin.fail()) {
             cin.clear(); // clear fail state
             cin.ignore(1000, '\n'); // discard bad input
             cout << "Invalid input. Please enter a number.\n";
            }

            else if (choice1 == 1) {
                int depoAmt {};
                cout << "\nEnter deposit amount: ";
                cin >> depoAmt;

                g.gold += depoAmt;
                cout << "\nNew Balance: " << g.gold << '\n';

            }

            else if (choice1 == 2) {
                int withdrawAmt {};
                cout << "\nEnter amount to withdraw: ";
                cin >> withdrawAmt;
                g.gold -= withdrawAmt;
                cout << "\nNew Balance: " << g.gold << '\n';
            }

            else if (choice1 == 3) {
                break;
            }

            else {
                cout << "\nPlease enter a number between 1-3!\n";
            }
        }

            break;
        }
        case DIAMOND: {   

            int choice1 {};

            while (true) {
            cout << "\nCurrent Balance is " << g.diamond;
            displayMenu2();
            cin >> choice1;
            
            if (cin.fail()) {
             cin.clear(); // clear fail state
             cin.ignore(1000, '\n'); // discard bad input
             cout << "Invalid input. Please enter a number.\n";
            }

            else if (choice1 == 1) {
                int depoAmt {};
                cout << "\nEnter deposit amount: ";
                cin >> depoAmt;

                g.diamond += depoAmt;
                cout << "\nNew Balance: " << g.diamond << '\n';

            }

            else if (choice1 == 2) {
                int withdrawAmt {};
                cout << "\nEnter amount to withdraw: ";
                cin >> withdrawAmt;
                g.diamond -= withdrawAmt;
                cout << "\nNew Balance: " << g.diamond << '\n';
            }
            
            else if (choice1 == 3) {
                break;
            }

            else {
                cout << "\nPlease enter a number between 1-3!\n";
            }
        }

            break;
        }   
        case SILVER: {

            int choice1 {};

            while (true) {
            cout << "\nCurrent Balance is " << g.silver;
            displayMenu2();
            cin >> choice1;
            
            if (cin.fail()) {
             cin.clear(); // clear fail state
             cin.ignore(1000, '\n'); // discard bad input
             cout << "Invalid input. Please enter a number.\n";
            }

            else if (choice1 == 1) {
                int depoAmt {};
                cout << "\nEnter deposit amount: ";
                cin >> depoAmt;

                g.silver += depoAmt;
                cout << "\nNew Balance: " << g.silver << '\n';

            }

            if (choice1 == 2) {
                int withdrawAmt {};
                cout << "\nEnter amount to withdraw: ";
                cin >> withdrawAmt;
                g.silver -= withdrawAmt;
                cout << "\nNew Balance: " << g.silver << '\n';
            }

            else if (choice1 == 3) {
                break;
            }

            else {
                cout << "\nPlease enter a number between 1-3!\n";
            }
        }

            break;
        }
        case COPPER: {

            int choice1 {};

            while (true) {
            cout << "\nCurrent Balance is " << g.copper;
            displayMenu2();
            cin >> choice1;
            
            if (cin.fail()) {
             cin.clear(); // clear fail state
             cin.ignore(1000, '\n'); // discard bad input
             cout << "Invalid input. Please enter a number.\n";
            }

            else if (choice1 == 1) {
                int depoAmt {};
                cout << "\nEnter deposit amount: ";
                cin >> depoAmt;

                g.copper += depoAmt;
                cout << "\nNew Balance: " << g.copper << '\n';

            }

            else if (choice1 == 2) {
                int withdrawAmt {};
                cout << "\nEnter amount to withdraw: ";
                cin >> withdrawAmt;
                g.copper -= withdrawAmt;
                cout << "\nNew Balance: " << g.copper << '\n';
            }

            else if (choice1 == 3) {
                break;
            }

            else {
                cout << "\nPlease enter a number between 1-3!\n";
            }
        }

            break;
        }
        case EXIT: {
        
            return 0;
        }
        default: {
        cout << "\nPlease select a NUMBER between 1-5!\n";
        break;
        }
    }
}
    }
}

void displayMenu1() {

    cout << "Please select the precious metal you wish to deposit or withdraw from:\n"
         << "1. Platinum\n"
         << "2. Gold\n"
         << "3. Diamond\n"
         << "4. Silver\n"
         << "5. Copper\n"
         << "0. EXIT\n"
         << "Enter your choice: ";
}

void displayMenu2() {
    cout << "\nDo you want to deposit or withdraw? "
         << "\n1. Deposit"
         << "\n2. Withdraw"
         << "\n3. Main Menu"
         << "\nChoice: ";
}

bool isValidDeposit(int depoAmt, int currentBalance) {
    return (depoAmt > 0) && ((depoAmt + currentBalance) <= MAX_LIMIT);
}

bool isValidWithdrawal(int withdrawAmt, int currentBalance) {
    return (withdrawAmt > 0) && (withdrawAmt <= currentBalance);
}
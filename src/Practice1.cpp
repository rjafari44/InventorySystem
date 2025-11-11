
#include <iostream>

using std::cout, std::cin;

/*
    I want this inventory to be able to add and decrease from the given category
   size. The user will be prompted to select the metal they wish to deposit or
   withdraw to. The user will then be shown the initial inventory size, and the
   size after. If they want to deposit more than the available space, they will
   be given an size warning, telling them the available space, and the max they
   can do.
*/

const int MAX_LIMIT{100};

struct Inventory {
  int platinum{}, gold{}, diamond{}, silver{}, copper{};
};

enum Metals { EXIT, PLATINUM, GOLD, DIAMOND, SILVER, COPPER };

enum Operation { QUIT, DEPOSIT, WITHDRAW, MAIN_MENU };

void displayMenu1();
void displayMenu2();
bool isValidDeposit(int depoAmt, int currentBalance);
bool isValidWithdrawal(int withdrawAmt, int currentBalance);
void someFunc(int &metalChoice);

int main() {

  int metalChoice{};
  Inventory g;

  cout << "Welcome to Ray's Inventory\n";

  while (true) {

    displayMenu1();
    cin >> metalChoice;

    if (cin.fail()) {
      cin.clear();            // clear fail state
      cin.ignore(1000, '\n'); // discard bad input
      cout << "\nInvalid input. Please enter a number.\n";
    } else {

      switch (metalChoice) {
        case PLATINUM:
          someFunc(g.platinum);
          break;
        case GOLD:
          someFunc(g.gold);
          break;
        case DIAMOND:
          someFunc(g.diamond);
          break;
        case SILVER:
          someFunc(g.silver);
          break;
        case COPPER:
          someFunc(g.copper);
          break;
        case EXIT:
          return 0;
        default:
          cout << "\nPlease select a NUMBER between 1-5!\n";
          break;
      }
    }
  }
}

void displayMenu1() {

  cout << "Please select the precious metal you wish to deposit or withdraw "
          "from:\n"
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

void someFunc(int &metalChoice) {

  int choice1{};

  while (true) {

    cout << "\nCurrent Balance is " << metalChoice;
    displayMenu2();
    cin >> choice1;

    if (cin.fail()) {
      cin.clear();            // clear fail state
      cin.ignore(1000, '\n'); // discard bad input
      cout << "Invalid input. Please enter a number.\n";
    } else if (choice1 == DEPOSIT) {
      int depoAmt{};
      cout << "\nEnter deposit amount: ";
      cin >> depoAmt;

      if (cin.fail()) {
        cin.clear();            // clear fail state
        cin.ignore(1000, '\n'); // discard bad input
        cout << "\nInvalid input. Please enter a number.\n";
      } else {
        if (isValidDeposit(depoAmt, metalChoice)) {
          metalChoice += depoAmt;
          cout << "\nNew Balance: " << metalChoice << '\n';
        } else {
          cout << "\nInvalid deposit amount\n";
        }
      }
    }

    else if (choice1 == WITHDRAW) {
      int withdrawAmt{};
      cout << "\nEnter amount to withdraw: ";
      cin >> withdrawAmt;

      if (cin.fail()) {
        cin.clear();            // clear fail state
        cin.ignore(1000, '\n'); // discard bad input
        cout << "\nInvalid input. Please enter a number.\n";
      } else {
        if (isValidWithdrawal(withdrawAmt, metalChoice)) {
          metalChoice -= withdrawAmt;
          cout << "\nNew Balance: " << metalChoice << '\n';
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
    break;
  }
}

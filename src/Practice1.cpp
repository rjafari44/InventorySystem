
#include "header.hpp"
#include <iostream>

using std::cout, std::cin;

const int MAX_LIMIT{100};

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
          manageInventory(g.platinum);
          break;
        case GOLD:
          manageInventory(g.gold);
          break;
        case DIAMOND:
          manageInventory(g.diamond);
          break;
        case SILVER:
          manageInventory(g.silver);
          break;
        case COPPER:
          manageInventory(g.copper);
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

void manageInventory(int &metalChoice) {

  int choice1{};

  while (true) {

    cout << "\nCurrent Balance is " << metalChoice << '\n';
    displayMenu2();
    cin >> choice1;
    cout << '\n';

    if (cin.fail()) {
      cin.clear();            // clear fail state
      cin.ignore(1000, '\n'); // discard bad input
      cout << "Invalid input. Please enter a number.\n";
    } else if (choice1 == DEPOSIT) {
      int depoAmt{};
      cout << "Enter deposit amount: ";
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
      cout << "Enter amount to withdraw: ";
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
      cout << "Please enter a number between 1-3!\n";
    }
  }
}

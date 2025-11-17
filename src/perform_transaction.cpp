#include "header.hpp"
#include <iostream>

using std::cin, std::cout;

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
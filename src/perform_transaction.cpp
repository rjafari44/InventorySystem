#include "header.hpp"
#include <iostream>

using std::cin, std::cout;

void manageInventory(float &metalChoice) {

  int innerChoice{};
  cout << "\nCurrent Balance is " << metalChoice << '\n';

  while (true) {

    displayMenu2();
    cin >> innerChoice;
    cout << '\n';

    if (cin.fail()) {
      cin.clear();            // clear fail state
      cin.ignore(1000, '\n'); // discard bad input
      cout << "Invalid input. Please enter a number.\n";
    } else if (innerChoice == DEPOSIT) {
      float depoAmt{};
      cout << "Enter deposit amount in kg: ";
      cin >> depoAmt;

      if (cin.fail()) {
        cin.clear();            // clear fail state
        cin.ignore(1000, '\n'); // discard bad input
        cout << "\nInvalid input. Please enter a number.\n";
      } else {
        if (isValidDeposit(depoAmt, metalChoice)) {
          metalChoice += depoAmt;
          cout << "\nNew Balance: " << metalChoice << "kg\n";
        } else {
          cout << "\nInvalid deposit amount\n";
        }
      }
    }

    else if (innerChoice == WITHDRAW) {
      float withdrawAmt{};
      cout << "Enter amount to withdraw in kg: ";
      cin >> withdrawAmt;

      if (cin.fail()) {
        cin.clear();            // clear fail state
        cin.ignore(1000, '\n'); // discard bad input
        cout << "\nInvalid input. Please enter a number.\n";
      } else {
        if (isValidWithdrawal(withdrawAmt, metalChoice)) {
          metalChoice -= withdrawAmt;
          cout << "\nNew Balance: " << metalChoice << "kg\n";
        } else {
          cout << "\nInvalid withdrawal amount\n";
        }
      }
    }

    else if (innerChoice == MAIN_MENU) {
      break;
    }

    else {
      cout << "Please enter a number between 1-3!\n";
    }
  }
}
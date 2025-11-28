#include "header.hpp"
#include <iostream>

// to remove the need for adding std:: everytime I want to use cout and cin
using std::cin, std::cout;

/* 
  function to perform the transaction for the selected metal
  uses the argument provided to it for right metal
  returns nothing
*/
void manageInventory(float &metalChoice) {

  int innerChoice{};  // inner menu variable declaration
  cout << "\nCurrent Balance is " << metalChoice << '\n';

  while (true) {   // while the condition is true (while not breaking out to main menu)

    displayMenu2();     // display the inner menu
    cin >> innerChoice; 
    cout << '\n';

    if (cin.fail()) {         // input validation check for inputting letters
      cin.clear();            // clear fail state
      cin.ignore(1000, '\n'); // discard bad input
      cout << "Invalid input. Please enter a number.\n";
    } else if (innerChoice == DEPOSIT) {   // if user chooses to deposit
      float depoAmt{};     // declare variable of float type for deposit amount
      cout << "Enter deposit amount in kg: ";
      cin >> depoAmt;

      if (cin.fail()) {         // input validation check for inputting letters
        cin.clear();            // clear fail state
        cin.ignore(1000, '\n'); // discard bad input
        cout << "\nInvalid input. Please enter a number.\n";
      } else {
        if (isValidDeposit(depoAmt, metalChoice)) {    // if the deposit is a valid amount
          metalChoice += depoAmt;
          cout << "\nNew Balance: " << metalChoice << "kg\n";
        } else {
          cout << "\nInvalid deposit amount\n";
        }
      }
    }

    else if (innerChoice == WITHDRAW) {    // if the user chooses to withdraw
      float withdrawAmt{};    // declare variable for float type for withdrawal amount
      cout << "Enter amount to withdraw in kg: ";
      cin >> withdrawAmt;

      if (cin.fail()) {         // input validation check for inputting letters
        cin.clear();            // clear fail state
        cin.ignore(1000, '\n'); // discard bad input
        cout << "\nInvalid input. Please enter a number.\n";
      } else {
        if (isValidWithdrawal(withdrawAmt, metalChoice)) {   // if the withdrawal is a valid amount
          metalChoice -= withdrawAmt;
          cout << "\nNew Balance: " << metalChoice << "kg\n";
        } else {
          cout << "\nInvalid withdrawal amount\n";
        }
      }
    }

    else if (innerChoice == MAIN_MENU) {  // if the user chooses to return to menu, break out of the while loop
      break;
    }

    else {      // if the user inputs the wrong number
      cout << "Please enter a number between 1-3!\n";
    }
  }
}
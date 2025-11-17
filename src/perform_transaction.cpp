#include "header.hpp"
#include <iostream>

// to remove the need for adding std:: everytime I want to use cout and cin
using std::cin, std::cout;

// function of void type to perform transaction for chosen metal, takes a variable of float type passed by reference
void manageInventory(float &metalChoice) {

  int innerChoice{};    // variable for user choice of transaction
  cout << "\nCurrent Balance is " << metalChoice << '\n';

  while (true) {        // while loop to repeat options unless exiting

    displayMenu2();     // function to display the inner menu
    cin >> innerChoice;
    cout << '\n';

    if (cin.fail()) {         // input validation check for inputting letters
      cin.clear();            // clear fail state
      cin.ignore(1000, '\n'); // discard bad input
      cout << "Invalid input. Please enter a number.\n";
    } else if (innerChoice == DEPOSIT) {     // if user chooses to deposit
      float depoAmt{};  // variable for storing user deposit  
      cout << "Enter deposit amount in kg: ";
      cin >> depoAmt;

      if (cin.fail()) {         // input validation check for inputting letters
        cin.clear();            // clear fail state
        cin.ignore(1000, '\n'); // discard bad input
        cout << "\nInvalid input. Please enter a number.\n";
      } else {   // else statement for checking the validation
        if (isValidDeposit(depoAmt, metalChoice)) {   // if statement with function to check for a valid deposit
          metalChoice += depoAmt;
          cout << "\nNew Balance: " << metalChoice << "kg\n";
        } else {   // if the user didn't choose a valid amount to deposit
          cout << "\nInvalid deposit amount\n";
        }
      }
    }

    else if (innerChoice == WITHDRAW) {      // if user chooses to withdraw
      float withdrawAmt{};    // variable for storing user withdrawal
      cout << "Enter amount to withdraw in kg: ";
      cin >> withdrawAmt;

      if (cin.fail()) {         // input validation check for inputting letters
        cin.clear();            // clear fail state
        cin.ignore(1000, '\n'); // discard bad input
        cout << "\nInvalid input. Please enter a number.\n";
      } else {    // else statement for checking the validation
        if (isValidWithdrawal(withdrawAmt, metalChoice)) {    // if statement with function to check for a valid withdrawal
          metalChoice -= withdrawAmt;
          cout << "\nNew Balance: " << metalChoice << "kg\n";
        } else {    // if the user didn't choose a valid amount to withdraw
          cout << "\nInvalid withdrawal amount\n";
        }
      }
    }

    else if (innerChoice == MAIN_MENU) {     // if user chooses to go back to main menu
      break;
    }

    else {      // if the user didn't input a valid number
      cout << "Please enter a number between 1-3!\n";
    }
  }
}
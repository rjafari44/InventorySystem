
#include "header.hpp"
#include <iostream>

// to remove the need for adding std:: everytime I want to use cout and cin
using std::cout, std::cin;

// main function
int main() {

  int metalChoice{};   // option variable for the menu
  Inventory storage;   // object for variable of type Inventory

  displayIntro();      // display the introduction and instructions

  while (true) {       // while loop for repeating the program

    displayMenu1();    // display first menu
    cin >> metalChoice;

    if (cin.fail()) {    // input validation check for inputting letters
      cin.clear();            // clear fail state
      cin.ignore(1000, '\n'); // discard bad input
      cout << "\nInvalid input. Please enter a number.\n";
    } else {

      switch (metalChoice) {   // switch statement for the different user choice of metal
        case PLATINUM:         // if user chooses platinum (1)
          manageInventory(storage.platinum);    // pass the platinum object as argument
          break;
        case GOLD:             // if user chooses gold (2)
          manageInventory(storage.gold);       // pass the gold object as argument
          break;
        case DIAMOND:          // if user chooses diamond (3)
          manageInventory(storage.diamond);   // pass the diamond object as argument
          break;
        case SILVER:           // if user chooses silver (4)
          manageInventory(storage.silver);    // pass the silver object as argument
          break;
        case COPPER:           // if user chooses copper (5)
          manageInventory(storage.copper);    // pass the copper object as argument
          break;
        case BALANCE:          // if user chooses to display balance (6)
          displayTotalBalance(storage);       // pass the whole struct object as argument
          break;
        case EXIT:             // if user chooses to exit (0)
          { 
            cout << "\nThank you for using our services!\n";
            return 0;
          }
        default:              // default case in case user does not choose the right number
          cout << "\nPlease select a NUMBER between 1-5!\n";
          break;
      }
    }
  }
}

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

      switch (metalChoice) {
        case PLATINUM:
          manageInventory(storage.platinum);
          break;
        case GOLD:
          manageInventory(storage.gold);
          break;
        case DIAMOND:
          manageInventory(storage.diamond);
          break;
        case SILVER:
          manageInventory(storage.silver);
          break;
        case COPPER:
          manageInventory(storage.copper);
          break;
        case BALANCE:
          displayTotalBalance(storage);
          break;
        case EXIT:
          { 
            cout << "\nThank you for using our services!\n";
            return 0;
          }
        default:
          cout << "\nPlease select a NUMBER between 1-5!\n";
          break;
      }
    }
  }
}

#include "header.hpp"
#include <iostream>

using std::cout, std::cin;

int main() {

  int metalChoice{};
  Inventory storage;

  displayIntro();

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
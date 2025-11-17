
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
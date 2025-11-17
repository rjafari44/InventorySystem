#include <iostream>

using std::cout;

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
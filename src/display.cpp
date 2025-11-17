#include "header.hpp"
#include <iostream>

// to remove need for using std:: for cout
using std::cout;

// function of void type to display the introduction and rules, takes no arguments
void displayIntro() {
  cout << "********** Welcome to Ray's Precious Metal Inventory **********\n"
       << "Before getting started, here is a description of what we offer and some things to keep in mind:\n"
       << "Here we offer precious metal storage services, such as deposits, withdrawals, and display of balance.\n"
       << "Each customer will have a maximum storage capacity of 100 kg.\n"
       << "Customers are allowed to deposit and withdraw fractionals in kg.\n"
       << "Please ensure you are keeping track of the deposit and withdrawal amounts.\n"
       << "***************************************************************\n\n";
}

// function of void type to display main menu, takes no arguments
void displayMenu1() {

  cout << "Please select the precious metal you wish to deposit or withdraw from:\n"
       << "1. Platinum\n"
       << "2. Gold\n"
       << "3. Diamond\n"
       << "4. Silver\n"
       << "5. Copper\n"
       << "6. Display Total Balance\n"
       << "0. EXIT\n"
       << "Enter your choice: ";
}

// function of void type to display inner menu, takes no arguments
void displayMenu2() {
  cout << "\nDo you want to deposit or withdraw? "
       << "\n1. Deposit"
       << "\n2. Withdraw"
       << "\n3. Main Menu"
       << "\nChoice: ";
}

// function of void type to display total balance of metals, takes variable of Inventory type passed by reference
void displayTotalBalance(const Inventory& storage){
  cout << "\n***** TOTAL BALANCE *****";
  cout << "\nPlatinum: " << storage.platinum; 
  cout << "\nGold:     " << storage.gold;
  cout << "\nDiamond:  " << storage.diamond;
  cout << "\nSilver:   " << storage.silver;
  cout << "\nCopper:   " << storage.copper;
  cout << "\n*************************\n\n";
}
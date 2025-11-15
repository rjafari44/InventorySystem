#ifndef HEADER_H
#define HEADER_H

struct Inventory {
  int platinum{}, gold{}, diamond{}, silver{}, copper{};
};

enum Metals { EXIT, PLATINUM, GOLD, DIAMOND, SILVER, COPPER };

enum Operation { QUIT, DEPOSIT, WITHDRAW, MAIN_MENU };

void displayMenu1();
void displayMenu2();
bool isValidDeposit(int depoAmt, int currentBalance);
bool isValidWithdrawal(int withdrawAmt, int currentBalance);
void manageInventory(int &metalChoice);


#endif
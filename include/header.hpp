#ifndef HEADER_H
#define HEADER_H

inline const int MAX_LIMIT{100};

struct Inventory {
  float platinum{}, gold{}, diamond{}, silver{}, copper{};
};

enum Metals { EXIT, PLATINUM, GOLD, DIAMOND, SILVER, COPPER, BALANCE };

enum Operation { QUIT, DEPOSIT, WITHDRAW, MAIN_MENU };

void displayIntro();
void displayMenu1();
void displayMenu2();
bool isValidDeposit(float depoAmt, float currentBalance);
bool isValidWithdrawal(float withdrawAmt, float currentBalance);
void manageInventory(float &metalChoice);
void displayTotalBalance(const Inventory& storage);


#endif
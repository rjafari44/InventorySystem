#include "header.hpp"

// function of boolean type to validate user deposit, takes two variables of float type as arguments
bool isValidDeposit(float depoAmt, float currentBalance) {
  return (depoAmt > 0) && ((depoAmt + currentBalance) <= MAX_LIMIT);
}

// function of boolean type to validate user withdrawal, takes two variables of float type as arguments
bool isValidWithdrawal(float withdrawAmt, float currentBalance) {
  return (withdrawAmt > 0) && (withdrawAmt <= currentBalance);
}
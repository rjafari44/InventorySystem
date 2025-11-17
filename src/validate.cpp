#include "header.hpp"

bool isValidDeposit(float depoAmt, float currentBalance) {
  return (depoAmt > 0) && ((depoAmt + currentBalance) <= MAX_LIMIT);
}

bool isValidWithdrawal(float withdrawAmt, float currentBalance) {
  return (withdrawAmt > 0) && (withdrawAmt <= currentBalance);
}
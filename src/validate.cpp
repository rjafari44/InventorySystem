#include "header.hpp"

bool isValidDeposit(int depoAmt, int currentBalance) {
  return (depoAmt > 0) && ((depoAmt + currentBalance) <= MAX_LIMIT);
}

bool isValidWithdrawal(int withdrawAmt, int currentBalance) {
  return (withdrawAmt > 0) && (withdrawAmt <= currentBalance);
}
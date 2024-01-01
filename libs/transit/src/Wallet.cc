#include "Wallet.h"

Wallet::Wallet(double initial_balance) : balance(initial_balance) {}

bool Wallet::canAfford(double amount) const { return balance >= amount; }

void Wallet::makePayment(double amount) {
  if (canAfford(amount)) balance -= amount;
}

void Wallet::addFunds(double amount) { balance += amount; }
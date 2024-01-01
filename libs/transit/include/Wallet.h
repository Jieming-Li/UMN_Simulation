#ifndef WALLET_H_
#define WALLET_H_

/**
 * @class Wallet
 * @brief Acts as a Human's wallet in a physical system
 *
 * Wallets have a balance from which humans can use to buy Glizzys
 * 
 */
class Wallet {
 public:
  /**
   * @brief Constructor
   * @param initial_balance the initial balance the wallet is worth
   */
  Wallet(double initial_balance);

  /**
   * @brief checks to see if the balance is greater than or equal to an amount
   * @param amount the amount to see if the wallet can purchase something
   */
  bool canAfford(double amount) const;

  /**
   * @brief removes money from the wallet to pay for something of a said amount
   * @param amount the amount of which something is being paid for
   */
  void makePayment(double amount);

  /**
   * @brief adds money to the balance of the wallet
   * @param amount the amount to be added to the balance of the wallet
   */
  void addFunds(double amount);

 private:
  double balance;
};

#endif
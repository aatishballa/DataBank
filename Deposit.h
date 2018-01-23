
#ifndef DEPOSIT_H
#define DEPOSIT_H

#include <string>
#include "Transaction.h"

class Deposit : public Transaction{

    Deposit(char userChoice, double amt, Date d, string payee);
    virtual double operator+(double tAmt) const override;
};

#endif /* DEPOSIT_H */


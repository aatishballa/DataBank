
/* 
 * File:   Withdrawal.h
 * Author: User-PC
 *
 * Created on October 19, 2017, 1:47 PM
 */

#ifndef WITHDRAWAL_H
#define WITHDRAWAL_H

#include <string>
#include "Transaction.h"

class Withdrawal : public Transaction {

    Withdrawal(char userChoice, double amt, Date d, string payee);    
    virtual double operator+(double tAmt) const override;
};

#endif /* WITHDRAWAL_H */
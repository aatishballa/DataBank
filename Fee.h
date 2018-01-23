
/* 
 * File:   Fee.h
 * Author: User-PC
 *
 * Created on October 19, 2017, 1:47 PM
 */

#ifndef FEE_H
#define FEE_H

#include <string>
#include "Transaction.h"

class Fee : public Transaction {
    Fee(char userChoice, double amt, Date d, string payee);
//    public:
//        void setAmount(double amt)override;
//        void setUserChoice(char choice)override;
//        void setDate(Date d) override;
//        void setPayee(string payee)override;
};

#endif /* FEE_H */


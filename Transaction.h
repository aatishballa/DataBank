
/* 
 * File:   Transaction.h
 * Author: User-PC
 *
 * Created on October 19, 2017, 1:46 PM
 */

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include "Date.h"

class Transaction{
   // friend istream& operator>>(istream&,Transaction&);
       
public:
    //constructor
    Transaction(char userChoice,double amt,Date d, string payee); 
    
    //function definations for getter's functions
    double getAmount() const;
    char getUserChoice();
    string getPayee();
    Date getDate() const;
    
    //function definations setter's functions
    virtual void setAmount(double amt);
    virtual void setUserChoice(char choice);
    virtual void setDate(Date d);
    virtual void setPayee(string payee);
    
  //  bool operator<(Transaction& t) const;
    virtual double operator+(double tAmt) const =0;   //pure virtual so =0
    
private:
    double transactionAmount;
    char userChoice;
    Date d;
    string payee;
};

#endif /* TRANSACTION_H */

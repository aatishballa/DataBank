
/*
 * 
 * 
 */
#include <string>
#include "Deposit.h"

Deposit::Deposit(char userChoice,double amt,Date date,string payee): Transaction(userChoice,amt,date,payee){
    setAmount(amt);  //needed or not?
    setUserChoice(userChoice);
    setDate(date);
    setPayee(payee);
}

double Deposit::operator+(double tAmt)const{
    double newTotal; 
    newTotal= tAmt + getAmount(); 
    return newTotal;
}
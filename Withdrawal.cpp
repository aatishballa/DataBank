/*
 * 
 * 
 */
#include <string>
#include "Withdrawal.h"

Withdrawal::Withdrawal(char userChoice,double amt,Date date,string payee): Transaction(userChoice,amt,date,payee){
    setAmount(amt);  //needed or not??
    setUserChoice(userChoice);
    setDate(date);
    setPayee(payee);
}

double Withdrawal::operator+(double tAmt)const{
    double newTotal;
    newTotal= tAmt - getAmount(); 
    
    if(newTotal<0){
        return tAmt; // adding withdrawal 
    }else{
        return newTotal;
    }
}

/* 
 * File:   Transaction.cpp
 * Author: User-PC
 *
 * Created on October 19, 2017, 1:46 PM
 */

#include <cstdlib>

#include "Transaction.h"

using namespace std;

Transaction::Transaction(char userChoice,double amt,Date date,string payee){
    setAmount(amt);
    setUserChoice(userChoice);
    setDate(date);
    setPayee(payee);
}

// setter for transaction type. 
void Transaction::setUserChoice(char choice){
        userChoice=choice;
}
// setter for amount 
void Transaction::setAmount(double amt){
    if(amt<0){
        throw invalid_argument("Amount cannot have negative values.");
    }else{
        transactionAmount=amt;
    }   
}
//setter for date
void Transaction::setDate(Date date){
    d=date;
}
//setter for payee
void Transaction::setPayee(string p){   
    payee=p;
}
//getter for amount
double Transaction::getAmount() const{
    return transactionAmount;
}
//getter for transaction type
char Transaction::getUserChoice(){
    return userChoice;
}
//getter for date
Date Transaction::getDate() const{
    return d;
}
//getter for payee
string Transaction::getPayee(){
    return payee;
}

/*overloading extraction operator
istream& operator>>(istream& input,Transaction& transc){
    char  tempTransType;
    double tempTransAmt;
    Date tempDate;
    string tempPayee="";
    
    input >> tempTransType >>tempTransAmt >> tempDate;   //input for trasaction type, amount and date
    getline(cin,tempPayee);  // input for payee, getline() because it can be more than a single word
    
    transc.setUserChoice(tempTransType);
    transc.setAmount(tempTransAmt);
    transc.setDate(tempDate);
    transc.setPayee(tempPayee);
}
*/

//bool Transaction::operator<(Transaction& t) const{
//    return this->getDate()< t.getDate();
//}
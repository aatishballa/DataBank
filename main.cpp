/* 
 * File:   main.cpp
 * Author: User-PC
 *
 * Created on October 19, 2017, 11:43 AM
 */

#include <cstdlib>
#include <vector>

#include "Transaction.h"
#include "Deposit.h"
#include "Withdrawal.h"

using namespace std;

void processTransactions(vector <Transaction*>& list,double openBalnc){
    double oldTotal=openBalnc;
    double newTotal;
    cout<<"Opening Balance: "<< openBalnc << endl;
    
    // for each loop through the vector of transactions*
    for(Transaction* t:list){
        //addition operator overloading
        newTotal = *t + oldTotal;         
        if(newTotal==oldTotal){
            cout<<"Over draft !";
            Transaction *f= new Fee('w',25.00,t->getDate(),"Overdraft fee.");
            newTotal = f + newTotal; //deducting 25.00 from total balance
            cout<<f.getDate()<<" Withdrawal, "<<f.getAmount()<<" from "<< f.getPayee()<<"Balance: "<<newTotal << endl;
        }else if (t.getUserChoice()=='d'){
            cout<<t.getDate()<<" Deposit, "<<t.getAmount()<<" from "<< t.getPayee()<<"Balance: "<<newTotal << endl;
        }else{
            cout<<t.getDate()<<" Withdrawal, "<<t.getAmount()<<" from "<< t.getPayee()<<"Balance: "<<newTotal << endl;
        }
 
    }
}

int main(int argc, char** argv) {
    char t;
    int amt;
    Date d;
    string payee;
    double openingBalance;
    vector <Transaction*> transactionsList;
    
    cout << "Enter opening balance: \n ";
    cin >> openingBalance;
    
    while (true){
        cout<<"Please enter: \n 1. Transaction Type 2. Amount 3. Date and 4. Payee \n"<< endl;
        cin >> t >> amt >> d;  
        getline(cin,payee); //multiple words for payee so getline
        
        if (!cin.good()){
            break;
        }
        
        if(t=="d"){
             Transaction *de= new Deposit(t,amt,d,payee);
             transactionsList.push_back(de);        //adding deposit object to vector
        }else{
             Transaction *w= new Withdrawal(t,amt,d,payee);
             transactionsList.push_back(w);        //adding withdrawal object to vector
        }
        processTransactions(transactionsList,openingBalance); //calling processTransactions method.
    }

    
    
}


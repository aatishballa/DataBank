/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <string>
#include "Transaction.h"
#include "Fee.h"

 Fee::Fee(char userChoice, double amt, Date d, string payee):
 Transaction(userChoice,amt,d,payee){
 }
 
//void setAmount(double amt){
//    return 0;
//}
//void setUserChoice(char choice){
//    return 0;
//}
//void setDate(Date d){
//    return 0;
//} 
//void setPayee(string payee){
//    return 0;
//}

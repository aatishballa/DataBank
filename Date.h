/* 
 * File:   Date.h
 * Author: Aatish
 *
 * 
 * This is the date class header. Here the information about a date such as
 * year, month, year are declared. 
 *  
 */

#ifndef DATE_H
#define DATE_H

#include <array>
#include <iostream>

using namespace std;

class Date{
    friend ostream& operator <<(ostream&, const Date&); // overloading insertion operator
    friend istream& operator >>(istream&,Date&); //overloading extraction operator
public:
    bool operator<(Date& otherDate); //overloading < operator
    
private:
    unsigned int month;
    unsigned int day;
    unsigned int year;
};

#endif /* DATE_H */


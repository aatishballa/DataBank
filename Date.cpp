/* 
 * File:   Date.cpp
 * Author: User-PC
 *
 * 
 * This file contains the implementations of date class.
 */

#include <cstdlib>
#include <iomanip>

#include "Date.h"

using namespace std;

//overloading stream insertion operator
ostream& operator<<(ostream& output, const Date& date){
    output<<date.month<<"/"<<date.day<<"/"<<date.year;
    return output;
}

 //date input format 09/30/2017
istream& operator >>(istream& input,Date& date){    
    input>>setw(2)>>date.month;  // retrives month from input 
    input.ignore();             //skips / character 
    input>>setw(2)>> date.day; // retrives month from input
    input.ignore();             //skips / character 
    input>>setw(4)>>date.year;  // retrives month input
    return input;
}


bool Date::operator<(Date& otherDate){
    if(this->year<otherDate.year){
        return true;
    }else if(this->month<otherDate.month){
        return true;
    }else if(this->day<otherDate.day){
        return true;
    }else{
        return false;
    }
}
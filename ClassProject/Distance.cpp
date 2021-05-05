//
//  Distance.cpp
//  ClassProject
//
//  Created by AB on 5/4/21.
//


#include "Distance.hpp"
#include <string>
#include <sstream>
#include <iostream>
using std::string;

string getString(int myInt);
Distance::Distance(){
    inches = 0; feet = 0;
} // Default constructor
Distance::Distance(int pFeet, int pInches){
    inches = pInches;
    feet = pFeet;
}

Distance::~Distance()//tilda class name is a destructor
{
    cout << "Destructor: invoked! "<< endl;
}

int Distance::getFeet(){
    return feet;
}
int Distance::getInches(){
    return inches;
}
void Distance::setFeet(int pFeet){
    feet =pFeet;
}
void Distance::setInches(int pInches){
    inches = pInches;
    while (inches >12)
    {
        inches -= 12;
        feet++;
    }
}

string Distance::describeDist(){
    string out;
    
   out = getString(feet) + "feet, ";
    out = out + getString(inches)+ " inch";
    //making a plural or singular naming:
    if (inches == 1 ) return out;
    out = out + "es";
    return out;
    
}

void Distance::add(Distance pDistance){
    
    feet = feet + pDistance.getFeet();
    inches = inches +pDistance.getInches();
    while (inches > 12)
    {
        inches -=12;
        feet += 1; //creates a more accurate count
    }
} //take Distances and parameter class and add to this class

//private member function:
string getString (int myInt){
    string out;
    stringstream ss;
    ss << myInt;
    string str = ss.str();
    
    return str;
}

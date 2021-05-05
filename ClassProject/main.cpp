//
//  main.cpp
//  ClassProject
//
//  Created by AB on 5/4/21.
//
#include <string>
#include <iostream>
#include "Distance.hpp"

//using namespace std;
using std :: string;


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    cout << " working with inches and feets"<< endl;
    
    Distance d1; //Testing default constructor:
    
    cout << "the distance (default constructor has)"<< d1.describeDist()<<endl;

    Distance d52(5,2);
    Distance d71(7,1);
    
    cout << "the distance of d52:  "<< d52.describeDist()<<endl;
    cout << "the distance of d71:  "<< d71.describeDist()<<endl;
    
    
    // heres the add:
    d52.add(d71);
    cout << " Below we have the addition of d52 & d71:  "<<endl;
    

    
    Distance d311(3, 11);
    Distance d98(9,8);
    
    d311.add(d98);
    cout << "the distance of d311 + d98: "<< d311.describeDist()<<endl;
    
    
    d98.setInches(1000);
    cout << "settin 1000 inches to d98: "<< d98.describeDist()<<endl;
    
    //Creating an array:
    cout << "Create arrays of Distance Objects" << endl;
    Distance distDefault[5];
    cout << "the  DistanceDefault of  [3]is  "<< distDefault[3].describeDist() << endl;
    
    Distance distConsValues [] = { Distance(1,2), Distance(29,2), Distance(13,8)  };
    cout << "the  DistConsValues of  [2] is  "<< distConsValues[2].describeDist() << endl;
    
    return 0;
}

//
//  Distance.hpp
//  ClassProject
//
//  Created by AB on 5/4/21.
//

#ifndef Distance_hpp
#define Distance_hpp
#include <string>
#include <stdio.h>
using namespace std;

#endif /* Distance_hpp */


class Distance
{
private:
    
    int inches;
    int feet;
    

    
public:
    Distance(); // Default constructor
    Distance(int pFeet, int pInches);
    ~Distance(); //Destructor
    
    
    
    int getFeet();
    int getInches();
    void setFeet(int pFeet);
    void setInches(int pInches);
    
    string describeDist();
    
    void add(Distance pDistance); //take Distances and parameter class and add to this class
    
    
};

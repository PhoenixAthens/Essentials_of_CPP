//
//  Person.hpp
//  EssentialsOfCPP
//
//  Created by Anmol Khanna on 04/06/24.
//

#ifndef Person_hpp
#define Person_hpp

#include <iostream>
#include <string>
using std::string;
class Person{
    string name;
    int age;
public:
    Person();
    Person(string, int);
    string toString();
};
#endif /* Person_hpp */

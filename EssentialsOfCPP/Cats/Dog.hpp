//
//  Dog.hpp
//  EssentialsOfCPP
//
//  Created by Anmol Khanna on 15/05/24.
//

#ifndef Dog_hpp
#define Dog_hpp
#include <iostream>
#include <format>
using std::cout;
using std::format;
class Dog{
    bool state{}; //initialized to false!
    //if we remove "{}"
    //then we can't be sure about what value "state" will assigned!
    //it could be "true" or it could be "false"
    
public:
    Dog();
    Dog(const bool);
    ~Dog();
    void speak();
    void changeMood();
};

#endif /* Dog_hpp */

#include <iostream>
#include "Person.hpp"
using std::cout;
int main(int argc, char** argv){
    Person p1;
    Person p2{"hog",23};
    Person p3("drake",34);
    
    cout<<p1.toString()<<"\n";
    cout<<p2.toString()<<"\n";
    cout<<p3.toString()<<"\n";
    
    cout<<"Memory address of p1: "<<&p1<<"\n";
    cout<<"Memory address of p2: "<<&p2<<"\n";
    cout<<"Memory address of p3: "<<&p3<<"\n";
    
    return 0;
}
/*
 Address of this: 0x16fdff0e0
 Address of this: 0x16fdff0c0
 Address of this: 0x16fdff088
 
 Name: , Age: 0
 Name: hog, Age: 23
 Name: drake, Age: 34
 
 Memory address of p1: 0x16fdff0e0
 Memory address of p2: 0x16fdff0c0
 Memory address of p3: 0x16fdff088
 */

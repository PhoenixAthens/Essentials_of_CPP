#include "Person.hpp"
#include <sstream>
using std::cout;

using std::stringstream;

Person::Person(){
    this->name = "";
    this->age = 0;
    
    cout<<"Address of this: "<<this<<"\n";
}
Person::Person(string name, int age){
    this->name = name;
    this->age = age;
    
    cout<<"Address of this: "<<this<<"\n";
}
string Person::toString(){
    stringstream ss;
    ss << "Name: ";
    ss << name;
    ss << ", Age: ";
    ss << age;
    return ss.str();
}

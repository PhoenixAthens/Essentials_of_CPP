#include <format>
#include <iostream>
#include <string>

using std::cout;
using std::string;

class Animal{
private:
    string name;
public:
    //constructor
    Animal(string name);
    
    //copy-constructor (overriding the implicity copy-constructor)
    Animal(const Animal& other);
    
    Animal(Animal& other);
    
    void setName(string newName);
    
    string getName();
    
    //same method but const and non-const variant
    void speak();
    void speak() const;
    
    void speak2() const;
};

Animal::Animal(string name): name(name){
    cout<<fmt::format("Animal object created (using main constructor)!!\n");
}

//from within the following constructor only const methods can be called since the object reference is const.
Animal::Animal(const Animal& other):name(other.name){
    other.speak(); //this will by-default refer to the const variant
    other.speak2();
    //can't call non-const methods here!
    
    cout<<fmt::format("Animal object created (using copy constructor) (const)!!\n");
}

//from within the following constructor 'const' as well as 'non-const' methods can be called, since the object reference is non-const
Animal::Animal(Animal& other):name(other.name){
    other.speak(); //this will by default refer to the non-const variant
    other.speak2();
    
    cout<<fmt::format("Animal object created (using copy constructor) (non-const)!!\n");
}

void Animal::setName(string newName){
    this->name = newName;
}
string Animal::getName(){
    return this->name;
}

void Animal::speak(){
    cout<<fmt::format("I am an animal, mah name {}! (No, I wasn't declated constant.)\n",this->name);
}

void Animal::speak() const{
    cout<<fmt::format("I am an animal, mah name {}! (Yes, I was declated constant.)\n",this->name);
}

void Animal::speak2() const{
    cout<<fmt::format("I am an animal, mah name {}! (Yes, I was declated constant. and am the fake one!)\n",this->name);
}

int main(int argc, char** argv){
    //Animal an1("freddy");

    Animal an1 = Animal("Freedy"); // we can also use this syntax instead of above, but we can't do 'Animal an1 = "Freddy"'
    an1.getName();
    //an1.name; //'name' is a private member of 'Animal'
    an1.speak(); //non-const speak is being called by default
    an1.speak2();
    an1.setName("freud");
    
    //OUTPUT:
    //Animal object created (using main constructor)!!
    //I am an animal, mah name freddy! (No, I wasn't declated constant.)
    //I am an animal, mah name freddy! (Yes, I was declated constant. and am the fake one!)
    
    //because we overrode the default constructor
    //Animal an2; //No matching constructor for initialization of 'Animal'
    const Animal an2(an1); //this is making use of constructor ar ln45
    //we can't call getName and setName on an2, because these methods are not const qualified!!
    //an2.getName();
    //an2.setName("filha");
    an2.speak();
    an2.speak2();
    
    //OUTPUT:
    //I am an animal, mah name freud! (No, I wasn't declated constant.)
    //I am an animal, mah name freud! (Yes, I was declated constant. and am the fake one!)
    // Animal object created (using copy constructor) (non-const)!!
    // I am an animal, mah name freud! (Yes, I was declated constant.)
    // I am an animal, mah name freud! (Yes, I was declated constant. and am the fake one!)
    
    
    Animal an3 = an1; //this is also making use of constructor ar ln45
    //we can't call getName and setName on an2, because these methods are not const qualified!!
    an3.getName();
    an3.setName("filha");
    an3.speak();
    an3.speak2();
    
    Animal an4 = {"jake"};
    an4.getName();
    //an1.name; //'name' is a private member of 'Animal'
    an4.speak(); //non-const speak is being called by default
    an4.speak2();
    an4.setName("freud");
    
    //OUTPUT
    //Animal object created (using main constructor)!!
    //I am an animal, mah name jake! (No, I wasn't declated constant.)
    //I am an animal, mah name jake! (Yes, I was declated constant. and am the fake one!)
}

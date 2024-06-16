#include <iostream>
#include <format>
#include <string>

using std::cout;
using std::string;

class Animal{
private:
    string name;
public:
    Animal(string name);
    Animal(const Animal& copy);
    ~Animal();
    
    void setName(string newName);
    string getName();
    
    void speak();
};
Animal::Animal(string name):name(name){
    cout<<fmt::format("Created Animal object!!\n");
}
Animal::Animal(const Animal& copy):name(copy.name){
    cout<<fmt::format("Created Animal object using copy-constructor!!\n");
}
Animal::~Animal(){
    cout<<fmt::format("Goodbye Animal Object (name:{})!!\n",this->name);
}
void Animal::setName(string newName){
    this->name=newName;
}
string Animal::getName(){
    return this->name;
}
void Animal::speak(){
    cout<<fmt::format("I, the animal named {}, shall not talk to you :<\n",this->name);
}

int main(int argc, char** argv){
    Animal an1("jinga");
    an1.setName("fren");
    an1.speak();
//    Created Animal object!!
//    I, the animal named fren, shall not talk to you :<
    
    //In the following statement, if the constructor is parameter-less, the parens are optional
    Animal* an2 = new Animal("jogo");
    an2->setName("mahito");
    an2->speak();
    
//  Created Animal object!!
//  I, the animal named mahito, shall not talk to you :<
    

    //an2 was never deallocated, it's under programmer's control to be deallocated!
    delete an2;
    //Goodbye Animal Object (name:mahito)!!
    
} //Automatic memory will be deallocated after this point in code
//  Goodbye Animal Object (name:fren)!!
    

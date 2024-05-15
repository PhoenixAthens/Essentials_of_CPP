#include "Cat.hpp"
#include "Dog.hpp"
int main(int argc, char** argv){
    Cat c1;
    c1.move();
    c1.makeSound();
    
    Dog d1;
    d1.speak(); //I am a Happy dog!
    d1.changeMood();
    d1.speak();
}
//The cat is moving!
//Meowwwwww!

//--Without calling "changeMood()"
//default constructor was called!
//I am a Sad dog!
//Destroying dog in false state

//--After calling "changeMood()"
//default constructor was called!
//I am a Sad dog!
//I am a Happy dog!
//Destroying dog in true state

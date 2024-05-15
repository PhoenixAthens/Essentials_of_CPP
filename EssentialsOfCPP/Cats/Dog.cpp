#include "Dog.hpp"
//implementation for default constructor
Dog::Dog(): state(false){
    cout<<format("default constructor was called!\n");
}
Dog::~Dog(){
    cout<<format("Destroying dog in {} state\n",state);
}
Dog::Dog(const bool b):state(b){
    cout<<format("Initializing dog to {}\n",b);
}

void Dog::speak(){
    if(state){
        cout<<format("I am a Happy dog!\n");
    }else{
        cout<<format("I am a Sad dog!\n");
    }
}
void Dog::changeMood(){
    state = !state;
}

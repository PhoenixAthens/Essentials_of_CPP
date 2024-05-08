#include <iostream>
#include <format>

using std::format;
using std::cout;

class C1{
    int c1Val{};
public:
    int getVal(){
        return c1Val;
    }
    void setVal(int newVal){
        c1Val = newVal;
    }
    
};

//const qualified member functions
class C2{
    int c2Val {};
public:
    void setVal(int newVal);
    int getVal() const;
    int getVal();
};
void C2::setVal(int newVal){
    c2Val = newVal;
}
int C2::getVal() const{
    //c2Val = c2Val*2;//Cannot assign to non-static data member within const member function 'getVal'
    cout<<format("Calling const qualified member!\n");
    return c2Val;
}
int C2::getVal(){
    //c2Val = c2Val * 2; //No Problem!
    cout<<format("Calling non-const qualified member!\n");
    return c2Val;
}


int main(int argc, char** argv){
    C1 c1;
    c1.setVal(23);
    cout<<format("The value of c1Val is {}\n",c1.getVal());
    //The value of c1Val is 23
    
    C2 c2;
    c2.setVal(102);
    cout<<format("The value of c2Val is {}\n",c2.getVal());
    //Calling non-const qualified member!
    //The value of c2Val is 102
    
    const C2 c2_2 = c2;
    //c2_2.setVal(109);//'this' argument to member function 'setVal' has type 'const C2', but function is not marked const
    cout<<format("The value of c2Val is {}\n",c2_2.getVal());
    //Calling const qualified member!
    //The value of c2Val is 102
    
    
    
}


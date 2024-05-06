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
    void setVal(int val){
        c1Val = val;
    }
};

//Taking function member definition outside the class
class C2{
    int c2Val;
public:
    void setVal(int val);
    int getVal();
};
int C2::getVal(){
    return c2Val;
}
void C2::setVal(int newVal){
    c2Val = newVal;
}

int main(int argc, char** argv){
    C1 c1;
    c1.setVal(23);
    cout<<format("Value of c1Val is {}\n",c1.getVal());
    //Value of c1Val is 23
    
    C2 c2;
    c2.setVal(189);
    cout<<format("Value of c2Val is {}\n",c2.getVal());
    //Value of c2Val is 189
}

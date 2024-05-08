#include <iostream>
#include <format>

using std::format;
using std::cout;

struct A{
    int ia;
    int ib;
    int ic;
};

class A2{
public:
    int ia;
    int ib;
    int ic;
};

class A3{
    int val1;
    int val2;
    int val3;
public:
    //A3(int a, int b, int c): val1{a}, val2{b}, val3{c}{} //you can use either {} or () for initializing member fields
    A3(int a, int b, int c): val1(a), val2(b), val3(c){}
    void seta(int a);
    void setb(int b);
    void setc(int c);
    int getA() const;
    int getB() const;
    int getC() const;
};

void A3::seta(int a){
    val1 = a;
}
void A3::setb(int b){
    val2 = b;
}
void A3::setc(int c){
    val3 = c;
}

int A3::getA() const{
    return val1;
}
int A3::getB() const{
    return val2;
}
int A3::getC() const{
    return val3;
}

int main(int argc, char** argv){
    A a1{23,34,45};
    cout<<format("The value of ia: {}, ib: {}, and ic: {}.\n",a1.ia,a1.ib,a1.ic);
    ////The value of ia: 23, ib: 34, and ic: 45.
    
    A2 a2{1,2,3};
    cout<<format("The value of ia: {}, ib: {}, and ic: {}.\n",a2.ia,a2.ib,a2.ic);
    //The value of ia: 1, ib: 2, and ic: 3.
    
    A3 a3{23,89,1023};
    cout<<format("The values of val1, val2, val3 are {}, {}, and {} respectively!\n",a3.getA(),a3.getB(),a3.getC());
    //The values of val1, val2, val3 are 23, 89, and 1023 respectively!
    return 0;
}



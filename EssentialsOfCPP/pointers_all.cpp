#include <iostream>
#include <format>
using std::cout;
using std::format;
using std::endl;

int main(int argc, char** argv){
    int x{42};
    int y{89};
    int* ip;
    ip = &x;
    
    int& z = x;
    cout<<format("The value of x is {}\n",x);
    cout<<format("The value of y is {}\n",y);
    cout<<format("The value of *ip is {}\n",*ip);
    
    x = 100;
    cout<<format("The value of *ip is {}\n",*ip);
    
    ip = &y;
    cout<<format("The value of *ip is {}\n",*ip);
    //The value of x is 42
    //The value of y is 89
    //The value of *ip is 42
    //The value of *ip is 100
    
    z = 23;
    cout<<format("The value of x is {}\n",x);
    cout<<format("The value of z is {}\n",z);
    //The value of x is 23
    //The value of z is 23
    
    z = y; //this doesn't make z a reference to y, but rather makes the value referred to by z equal to y
    //cout<<format("The valu")
    return 0;
}


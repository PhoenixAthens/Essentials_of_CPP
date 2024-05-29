#include <iostream>
#include <format>

using std::format;
using std::cout;

template <typename T>
T factorial(T);

int main(int argc, char** argv){
    cout<<format("The factorial of {} is {}\n",20,factorial<long>(20));
    cout<<format("The factorial of {} is {}\n",10,factorial<int>(10));
    cout<<format("The factorial of {} is {}\n",10,factorial<unsigned long>(20));
    cout<<format("The factorial of {} is {}\n",21,factorial<double>(28));
}
//The factorial of 20 is 2432902008176640000
//The factorial of 10 is 3628800
//The factorial of 10 is 2432902008176640000
//The factorial of 21 is 3.0488834461171384e+29

template <typename T>
T factorial(T val){
    if(val == 2)
        return val;
    else
        return val * factorial(val-1);
}


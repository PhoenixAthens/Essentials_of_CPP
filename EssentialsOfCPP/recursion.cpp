#include <iostream>
#include <format>

using std::format;
using std::cout;

int factorial_R(int i){
    if(i < 2) return i;
    else return i*factorial_R(i-1);
}
unsigned long factorial_L(unsigned long i){
    long j{1};
    while(i>1){
        j*=i;
        i--;
    }
    return j;
}
int main(int argc, char** argv){
    cout<<format("Factorial of 5 (with recursion) is {}!\n",factorial_R(5));
    cout<<format("Factorial of 5 (without recursion) is {}!\n",factorial_L(5));
//    Factorial of 5 (with recursion) is 120!
//    Factorial of 5 (without recursion) is 120!
}

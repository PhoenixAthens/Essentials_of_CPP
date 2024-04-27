#include <iostream>
#include <format>
#include <cmath>

using std::cout;
using std::format;
using std::endl;
using std::pow;

void func1();
void func2(int);
void func3(int, const char*);
int func4(int, const char*);
int main(){
    cout<<"This is the main function talking!"<<endl;
    func1();
    
    func2(23);
    
    func3(23, "Yelp!");
    
    auto i = func4(34,"Giddy!");
    cout<<format("The value returned by fun4 is {}\n",i);
    
}
//This is the main function talking!
//I am Johnny!
//I am func2, and prints 23
//I am func3, the value of i is 23, and str equals Yelp!
//I am func4, the value of i is 34, and str equals Giddy!
//The value returned by fun4 is 45435424

void func1(){
    cout<<"I am Johnny!"<<endl;
}

void func2(int i){
    cout<<format("I am func2, and prints {}\n",i);
}

void func3(int i, const char* str){
    cout<<format("I am func3, the value of i is {}, and str equals {}\n",i,str);
}

int func4(int i, const char* str){
    cout<<format("I am func4, the value of i is {}, and str equals {}\n",i,str);
    return pow(i,5);
}

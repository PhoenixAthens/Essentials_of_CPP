#include <iostream>
#include <format>
#include <cmath>
#include <string>

using std::cout;
using std::format;
using std::endl;
using std::pow;

void func1();
void func2(int);
void func3(int, const char*);
int func4(int, const char*);
void func5(int b = 45); //you can change the name of params from declaration to definition
void func6(int&);
void func8(const std::string&);
const std::string& func9();
int main(){
    cout<<"This is the main function talking!"<<endl;
    func1();
    
    func2(23);
    
    func3(23, "Yelp!");
    
    auto i = func4(34,"Giddy!");
    cout<<format("The value returned by fun4 is {}\n",i);
    
    //calling without argument
    func5();
    //OUTPUt: The value of a: 45
    
    //calling with argument
    func5(123);
    //OUTPUT: The value of a: 123
    
    //calling the function by passing in a literal
    //func6(23); //you cannot call func6(int&) like this
    
    //calling the function by passing in a variable
    int a = 23;
    func6(a); //OUTPUT: The value of a has been changed to 34
    cout<<format("The value of a is {}\n",a);
    //output: The value of a is 34
    
    func8("Hello Jason!"); //we can pass in a string literal in this manner
    //The value of s is Hello Jason!
    
    auto s = "Hello Junction!";
    func8(s);
    //The value of s is Hello Junction!
    
    cout<<format("printer the type of string literal, {}\n",typeid("Hello").name());
    //printer the type of string literal, A6_c
    
    const auto& sup = func9();
    cout<<format("We go, {}\n",sup);
    //We go, Hello, this is 93.5 RED FM~
    cout<<format("calc: {}",(2.3* 9/5)); //4.14
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

//functions with default values
void func5(int a){
    cout<<format("The value of a: {}\n",a);
}

//function that takes a reference
void func6(int& a){
    a = 34;
    cout<<format("The value of a has been changed to {}\n",a);
}

//const qualified reference
void func7(const int& a){
    //a = 34; //Cannot assign to variable 'a' with const-qualified type 'const int &'
    cout<<format("The value of a cannot be changed!");
}

void func8(const std::string& s){
    cout<<format("The value of s is {}\n",s);
}

const std::string& func9(){
    static std::string s = format("Hello, this is 93.5 RED FM~");
    return s;
}

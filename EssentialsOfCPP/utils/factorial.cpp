//
//  factorial.cpp
//  EssentialsOfCPP
//
//  Created by Anmol Khanna on 27/04/24.
//
#include <iostream>
#include <format>
#include <limits>
#include <iomanip>
#include <string>

int main(){
    using namespace std;
    int fact_args = 0;
    int fact(1);
    do{
        cout<<"Factorial of: ";
        cin>>fact_args;
        if(fact_args < 0){
            cout<<"No negative values for the factorial function";
        }
    }while(fact_args<0);
    int i = 2;
    while(i<=fact_args){
        fact*=i;
        i++;
    }
    cout<<"The factorial of "<<fact_args<<" is "<<fact<<endl;
    
    //printing size of data-types
    cout<<format("Size of int: {}\n",sizeof(int)); //Size of int: 4
    cout<<format("Size of short: {}\n",sizeof(short)); //Size of short: 2
    cout<<format("Size of short int: {}\n",sizeof(short int)); //Size of short int: 2
    cout<<format("Size of long int: {}\n",sizeof(long int)); //Size of long int: 8
    cout<<format("Size of long long int: {}\n",sizeof(long long int)); //Size of long long int: 8
    cout<<format("Size of unsigned int: {}\n",sizeof(unsigned int)); //Size of unsigned int: 4
    cout<<format("Size of unsigned short: {}\n",sizeof(unsigned short)); //Size of unsigned short: 2
    cout<<format("Size of unsigned long: {}\n",sizeof(unsigned long)); //Size of unsigned long: 8
     
    //using limits.h
    cout<<format("Min int value: {}\n",INT_MIN); //Min int value: -2147483648
    cout<<format("Max int value: {}\n",INT_MAX); //Max int value: 2147483647
    cout<<format("Min short value: {}\n",SHRT_MIN); //Min short value: -32768
    cout<<format("Max short value: {}\n",SHRT_MAX); //Max short value: 32767
    cout<<format("Min long value: {}\n",LONG_MIN); //Min long value: -9223372036854775808
    cout<<format("Max long value: {}\n",LONG_MAX); //Max long value: 9223372036854775807
    cout<<format("Min char value: {}\n",CHAR_MIN); //Min char value: -128
    cout<<format("Max char value: {}\n",CHAR_MAX); //Max char value: 127
    
    //floating-point types
    
    //float
    float fValue = 76.4;
    cout << fixed << format("The value of float (manipulated with fixed): {}\n",fValue)<<endl;
    //The value of float (manipulated with fixed): 76.4
    
    cout << scientific << format("The value of float (manipulated with scientific): {}\n",fValue)<<endl;
    //The value of float (manipulated with scientific): 76.4
    
    cout << fixed << fValue <<endl; //76.400002
    cout << scientific << fValue <<endl; //7.640000e+01
    
    cout<<format("The size of float is {}\n",sizeof(float));
    //The size of float is 4
    
    cout<<format("The size of double is {}\n",sizeof(double));
    //The size of double is 8
    
    cout<<format("The size of long double is {}\n",sizeof(long double));
    //The size of long double is 8
    
    cout<<setprecision(20)<<fixed<<fValue<<endl; //76.40000152587890625000
    cout<<setprecision(10)<<fixed<<fValue<<endl; //76.4000015259
    
    //double
    double dValue = 76.4;
    
    cout<<fixed<<dValue<<endl; //76.4000000000
    cout<<scientific<<dValue<<endl; //7.6400000000e+01
    
    cout<<setprecision(20)<<fixed<<dValue<<endl; //76.40000000000000568434
    cout<<setprecision(10)<<fixed<<dValue<<endl;
    
    //long double
    long double ldValue = 76.4;
    
    cout<<fixed<<ldValue<<endl;
    cout<<scientific<<ldValue<<endl;
    
    cout<<setprecision(20)<<fixed<<ldValue<<endl;
    cout<<setprecision(10)<<fixed<<ldValue<<endl;
    
    
    //char and wchar_t
    
    char firstLetter = 'A';
    cout<<format("firstLetter: {}, has codepoint value of {}\n",firstLetter,(int)firstLetter);
    cout<<format("Size of char data type is {}\n",sizeof(char));
//    firstLetter: A, has codepoint value of 65
//    Size of char data type is 1
    
    
    wchar_t secondLetter = 'B';
    printf("%d",secondLetter);//66
    //why we used printf, because cout was not working with wchar_t
    cout<<"secondLetter: "<<(char)secondLetter<<" has codepoint value of "<<endl;
    //secondLetter: B has codepoint value of
    cout<<format("Size of wchar_t data type is {}\n",sizeof(wchar_t)); //Size of wchar_t data type is 4
    
    cout<<"Enter your password: "<<flush;
    string pswd;
    cin >> pswd;
    cout<<format("You password is {}\n",pswd);
    //Enter your password: letmein hello
    //You password is letmein
    
    //Thus proving that space is the delimeter for separation
    
    //How about enclosing the text in single quotes
    //OUTPUT:
    //    Enter your password: 'hello world'
    //    You password is 'hello
    
    //How about enclosing the text in double quotes
    //OUTPUT:
    //    Enter your password: "Hello world"
    //    You password is "Hello
    
    //How about using backslash to escape spaces
    //OUTPUT:
    //    Enter your password: Hello\ World
    //    You password is Hello\
    
    return 0;
}
//Factorial of: 23
//The factorial of 23 is 862453760

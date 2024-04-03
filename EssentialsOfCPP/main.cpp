//
//  main.cpp
//  EssentialsOfCPP
//
//  Created by Anmol Khanna on 03/04/24.
//

#include <iostream>
#include <format>

using std::format;
using std::cout;
//declaring the function prototype
void basicSyntax_arrays();
void basicSyntax_characterStirng();

int main(int argc, const char * argv[]) {
    // Starting code
    std::cout<< "Hello, World!\n";
    //std::cout<<arrayGenerator();
    basicSyntax_arrays();
    
    basicSyntax_characterStirng();
    
    return 0;
}

//creating and printing an array
void basicSyntax_arrays(){
    const int nums[] = {1,2,3,4};
    for(auto& n: nums){
        std::cout<<std::format("{}\n",n);
    }
}
//output:
//1
//2
//3
//4

//creating a char array using the pointer notation.
void basicSyntax_characterStirng(){
    const char* hello{"Hello, Traveller!\n"};
    cout<<hello;
}
//output:
//Hello, Traveller!

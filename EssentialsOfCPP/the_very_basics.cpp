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
    //nums[0] = 19; //you cannot change the internal state of a const variable
    for(auto& n: nums){
        //n = 23; is we do this then the array element at that particular index becomes 23, because auto& is a reference variable to the element in
        //array
        std::cout<<std::format("{}\n",n);
    }
    for(auto& n: nums){
        std::cout<<std::format("{}\n",n);
    }
    //if code at ln33 is uncommented
    //OUTPUT:
//    23
//    23
//    23
//    23
//    23
//    23
//    23
//    23

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

//
//  main.cpp
//  EssentialsOfCPP
//
//  Created by Anmol Khanna on 03/04/24.
//

#include <iostream>
#include <format>
#include <array>
using std::format;
using std::cout;
//declaring the function prototype
void basicSyntax_arrays();
void basicSyntax_characterStirng();
void usingArrays();
int main(int argc, const char * argv[]) {
    // Starting code
    std::cout<< "Hello, World!\n";
    //std::cout<<arrayGenerator();
    basicSyntax_arrays();
    usingArrays();
    basicSyntax_characterStirng();
    constexpr char* name = "Klein";
    char* name_2 = name;
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
    constexpr char* hello{"Hello, Traveller!\n"};
    cout<<hello;
}
//output:
//Hello, Traveller!
void usingArrays(){
    std::array<int, 4> arr = {2,4,19,12};
    for(auto& i : arr){
        cout<<"WE have "<<i<<std::endl;
    }
    cout<<arr.at(0)<<std::endl;
    cout<<arr.size()<<std::endl;
}
//
//WE have 2
//WE have 4
//WE have 19
//WE have 12
//2
//4

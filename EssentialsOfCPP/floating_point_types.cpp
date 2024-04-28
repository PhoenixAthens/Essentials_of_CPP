#include <iostream>
#include <format>
#include <string>

using std::format;
using std::cout;
using std::string;
using std::endl;

const size_t byte{8};

void multiDimArrays();

int main(int argc, char** argv){
    float f {};
    double df {};
    long double ldf {};
    float f2 {5e2};
    cout << format("The size of float is {}\n",sizeof(f) * byte);
    cout << format("The size of double is {}\n",sizeof(df) * byte);
    cout << format("The size of long double is {}\n",sizeof(ldf) * byte);
    cout << format("The value of f2 is {}, and its size is {}\n",f2,sizeof(f2)*byte);
    cout<<"Hello"<<std::endl;
    multiDimArrays();
}
void multiDimArrays(){
    string arr[][3] = { //with this syntax, you can omit the length of main array but the specification of length of sub-array is mandatory!
        {"Apple","Microsoft","Netflix"}, //if you remove the length of sub-array, you get an error
        {"Nvidia","Uber","AWS"}
    };
    cout<<format("Size of arr: {}\n",sizeof(arr)); //Size of arr: 144
    cout<<format("Size of string data type: {}\n",sizeof(string)); //Size of string data type: 24
    for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
        for(int j = 0; j<sizeof(arr[0])/sizeof(string); j++)
            cout<<format("{} ",arr[i][j]);
        cout<<endl;
    }
    
    string arr_2[][3] = {
        {},
        {}
    };
    cout<<format("Size of arr: {}\n",sizeof(arr_2));
    //Size of arr: 144
    
//    Apple Microsoft Netflix
//    Nvidia Uber AWS
    
    //when we run our program with just empty braces assigned like so to arr
    /*
     string arr[][3] = {
        {},
        {}
     };
     */
    //element at arr[0][1] is
    
    //Accessing out-of-bounds index
    //cout<<format("element at arr[0][1] is {}\n",arr[0][3]);
    //clang gives us warning "Array index 3 is past the end of the array (which contains 3 elements)"
    
}
//The size of float is 32
//The size of double is 64
//The size of long double is 64

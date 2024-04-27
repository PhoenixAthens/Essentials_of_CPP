#include <iostream>
#include <format>

using std::format;
using std::cout;

const size_t byte{8};

int main(int argc, char** argv){
    float f {};
    double df {};
    long double ldf {};
    float f2 {5e2};
    cout << format("The size of float is {}\n",sizeof(f) * byte);
    cout << format("The size of double is {}\n",sizeof(df) * byte);
    cout << format("The size of long double is {}\n",sizeof(ldf) * byte);
    cout << format("The value of f2 is {}, and its size is {}\n",f2,sizeof(f2)*byte);
}
//The size of float is 32
//The size of double is 64
//The size of long double is 64

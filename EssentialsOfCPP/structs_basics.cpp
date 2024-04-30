#include <iostream>
#include <format>
using std::format;
using std::cout;

struct Bunch{
    int i;
    double d;
    char* s;
};
int main(int argc, char** argv){
    Bunch b{2,3.45,"Hello World"};
    cout<<format("i: {}, d: {}, s: {}!\n",b.i,b.d,b.s);
    
    Bunch b2 {3, 6.89, "Jacob"};
    auto* b_2 = &b2;
    b_2->d = 3.14;
    cout<<format("i: {}, d: {}, s: {}!\n",b_2->i,b_2->d,b_2->s);
    
//i: 2, d: 3.45, s: Hello World!
//i: 3, d: 3.14, s: Jacob!
}

#include <iostream>
#include <format>

using std::format;
using std::cout;
using std::cin;
 
const size_t byte {0};

int main(int argc, char** argv){
    float f{};
    double df{};
    long double ldf{};
    cout<<format("The value of float is {}, and it takes {} bits in memory.\n",f,sizeof(f)*byte);
    //to print float with certain precision, use {:.nf}, where n stands for the number of digits you want after the decimal point
    cout<<format("The value of double is {:.40f}, and it takes {} bits in memory.\n",df,sizeof(df)*byte);
    cout<<format("The value of long double is {:.40f}, and it takes {} bits in memory.\n",ldf,sizeof(ldf)*byte);
    
//    The value of double is 0.0000000000000000000000000000000000000000, and it takes 0 bits in memory.
//    The value of long double is 0.0000000000000000000000000000000000000000, and it takes 0 bits in memory.
    
    f = 500.0;
    df = 5e2;
    cout<<format("Comparing float with value {} with double with value {} gives {}\n",f,df, ((f==df) ? true:false));
    //Comparing float with value 500 with double with value 500 gives true
    
    f = 0.3 + 0.3 + 0.3;
    df = 0.9;
    cout<<format("Comparing float with value {:.20f} with double with value {:.20f} gives {}\n",f,df, ((f==df) ? true:false));
    //Comparing float with value 0.89999997615814208984 with double with value 0.90000000000000002220 gives false
    cout<<format("Comparing float with value {} with double with value {} gives {}\n",f,df, ((f==df) ? true:false));
    //Comparing float with value 0.9 with double with value 0.9 gives false
    //
    return 0;
}

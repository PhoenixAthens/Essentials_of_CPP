#include <iostream>
#include <format>
#include <string>

using std::cout;
using std::string;
using fmt::format;

template<typename T>
T maxOf(T a, T b){
    return a>b?a:b;
}
int main(int argc, char** argv){
    int a{23};
    int b{90};
    int result{maxOf<int>(a,b)};
    cout<<format("The result of maxOf on {} and {} is {}\n",a,b,result);
    //The result of maxOf on 23 and 90 is 90
    
    const char* str1 {"fonda"};
    const char* str2 {"Jane"};
    const char* result_2 {maxOf<const char*>(str1,str2)};
    cout<<format("The pointer of {}, in terms of value is greater between {} and {}\n",result_2,str1,str2);
    //The pointer of Jane, in terms of value is greater between fonda and Jane
    
    string string1 {"Juliet"};
    string string2 {"Romeo"};
    cout<<format("{} always comes after in {} and {}\n",maxOf(string1,string2),string1,string2);
    //Romeo always comes after in Juliet and Romeo
}

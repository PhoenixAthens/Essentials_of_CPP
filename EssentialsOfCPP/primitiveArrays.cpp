#include <iostream>
#include <format>
using std::cout;
using std::format;
using std::endl;

int main(){
    //declaring an array that is initialized to 0 for each element
    int arr[4]{};
    
    int arr_2[5]{1,2,3,4,5};
    //This way we are copying each element of the array into a variable
    for(int i: arr_2){
        cout<<format("printing: {}\n",i);
    }
    /*
     printing: 1
     printing: 2
     printing: 3
     printing: 4
     printing: 5
     */
    
    //This way we are simply referencing each element
    for(const int& a: arr_2){
        cout<<format("{} ",a);
    }
    //1 2 3 4 5
    cout<<endl;
    
    
    int* arr_3 = {};
    for(int i = 0;i<5;i++){
        *(arr_3+i) = i*4;
    }
    //can't print the values from above array!
    //for-each loop didn't work
    //for-loop didn't work
    //printing each element manually didn't work either!
    
    int arr_4[5] = {};
    for(int i = 0;i<5;i++){
        *(arr_4+i)=i*7;
    }
    for(const auto& a: arr_4){
        cout<<format("{} ",a);
    }
    //0 7 14 21 28
    cout<<endl;
    
    
    int arr_5[5] {};
    int *ip = arr_5;
    for(int i = 0;i<sizeof(arr_5)/sizeof(int);i++){
        *(++ip)=i*9;
        
    }
    for(const auto& g: arr_5)
        cout<<format("{} ",g);
    cout<<endl;
    //if we use *(ip++)
    //0 9 18 27 36
    
    //if we use *(++ip)
    //0 0 9 18 27
    
    //c-strings
    const char s[] {"String am I"};
    cout<<format("{}\n",s);
    
    //printing c-string with the null-terminator
    for(const auto& a: s){
        cout<<format("{}\n",a);
    }
    
    //printing c-sstring without the null-terminator
    for(const auto& a : s){
        if(a)cout<<format("{}\n",a);
    }
    
    //printing c-string c-style
    for(const char* p{s}; *p;++p){
        cout<<format("{}\n",*p);
    }
}

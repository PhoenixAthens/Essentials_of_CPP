#include <iostream>
#include <iostream> //this doesn't cause a problem!
#include <format>
using std::cout;
using std::format;

void tryingOutWhile(const auto&);
void tryingOutDoWhile(const auto&);
void tryingOutFor_1(char*);
void tryingOutFor_2(auto&);
void tryingOutFor_3(char*);
void tryingOutRangeBasedFor(auto&);
void rangeBasedForLoop_fixed(auto&);

int main(){
    int arr[]{1,2,3,4,5};
    tryingOutWhile(arr);
    cout<<"\t\t=====\n";
    tryingOutDoWhile(arr);
    cout<<"\t\t=====\n";
    
    char str[]{"Krypton"};
    //cout<<format("size of str is {}\n",sizeof(str));//output = 8
    tryingOutFor_1(str);
    cout<<"\t\t=====\n";
    
    tryingOutFor_2(str);
    
    cout<<"\t\t=====\n";
    tryingOutFor_3(str);
    
    cout<<"\t\t=====\n";
    tryingOutRangeBasedFor(str);
    
    cout<<"\t\t=====\n";
    rangeBasedForLoop_fixed(str);
    
}
void tryingOutWhile(const auto& arr){
    int i{0};
    while(i<5){
        cout<<format("at {}, we have {}\n",i,arr[i]);
        i++;
    }
}
//OUTPUT
//at 0, we have 1
//at 1, we have 2
//at 2, we have 3
//at 3, we have 4
//at 4, we have 5

void tryingOutDoWhile(const auto& arr){
    int i{0};
    do{
        cout<<format("At {}, we have {}\n",i,arr[i]);
        i++;
    }while(i<5);
    
}
//OUTPUT
//At 0, we have 1
//At 1, we have 2
//At 2, we have 3
//At 3, we have 4
//At 4, we have 5



void tryingOutFor_2(auto& arr){
    for(int i{0};arr[i];i++){
        cout<<format("At {}, we have {}\n",i,arr[i]);
    }
}
//At 0, we have K
//At 1, we have r
//At 2, we have y
//At 3, we have p
//At 4, we have t
//At 5, we have o
//At 6, we have n

//using pointers


void tryingOutFor_1(char* str){
    //if we replace i<sizeof(str) with str[i]
    for(int i{0};i<sizeof(str);i++){
        cout<<format("we have {}\n",str[i]);
    }
    cout<<"\n";
}

//OUTPUT with str[i] as loop-condition
//we have K
//we have r
//we have y
//we have p
//we have t
//we have o
//we have n



//OUTPUT with i < sizeof(str) as loop-condition
//we have K
//we have r
//we have y
//we have p
//we have t
//we have o
//we have n
//we have

void tryingOutFor_3(char* arr){
    for(char* p{arr}; *p; ++p){
        cout<<format("we print {}\n",*p);
    }
}
//we print K
//we print r
//we print y
//we print p
//we print t
//we print o
//we print n

//in range based for loops, you need a reference, just a pointer will not work!
void tryingOutRangeBasedFor(auto& arr){
    //if we use auto* instead of auto&, we get the following
    //Invalid range expression of type 'char *'; no viable 'begin' function available
    //int arr[] = {1,2,3};
    for(const auto& a : arr){ //this gives invalid range, because we need a reference in range based for loop
        cout<<format("char is {}\n",a);
    }
}

//char is K
//char is r
//char is y
//char is p
//char is t
//char is o
//char is n
//char is


//fixing above range-based for loop
void rangeBasedForLoop_fixed(auto& arr){ //when we pass (char& arr) as argument, it doesn't work because it takes the range as a single character then
    for(const char& a: arr){
        if(a==0)break;
        cout<<format(" let's print {}\n",a);
    }
}
//let's print K
//let's print r
//let's print y
//let's print p
//let's print t
//let's print o
//let's print n

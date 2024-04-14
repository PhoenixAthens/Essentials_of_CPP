#include <iostream>
#include <format>
using std::cout;
using std::format;

void tryingOutWhile(const auto&);
void tryingOutDoWhile(const auto&);

int main(){
    int arr[]{1,2,3,4,5};
    tryingOutWhile(arr);
    cout<<"\t\t=====\n";
    tryingOutDoWhile(arr);
    
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



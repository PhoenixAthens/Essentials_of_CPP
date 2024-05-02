#include <iostream>
#include <format>
#include <cmath>
using std::cout;
using std::format;

int main(int argc, char** argv){
    int arr[25]{};
    int ind = 0;
    for(int i = 2;ind<25;i++){
        int factors = 0;
        for(int j=2;j<=(int)sqrt(i);j++){
            if(i%j==0){
                factors++;
                break;
            }
        }
        if(factors==0)arr[ind++]=i;
    }
    for(int i = 0;i<25;i++){
        cout<<format("{} ",arr[i]);
    }
    cout<<format("\n");
    return 0;
}

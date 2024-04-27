#include <iostream>
#include <format>
#include <string>
#include <vector>
#include <cstdint>

using std::cout;
using std::format;
using std::string;
using std::vector;

//OLD WAY
typedef uint32_t points_t;
typedef uint64_t rank_t;

struct scoreCard{
    points_t p;
    rank_t r;
};

//MODERN WAY
using points = uint8_t;
using rank = uint64_t;

struct scoreCard_improved{
    points p;
    rank r;
};

void withoutAutoForIteration(void);
void usingAutoForIteration(void);
int returningVariableStatic();
int returningVariableAutomatic();


int main(int argc, char** argv){
    string s {"This is a string"};
    auto x = s;
    cout<<format("X is {}\n",x);
    cout<<format("Type of x is {}\n",typeid(x).name());
//    X is This is a string
//    Type of x is NSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
    cout<<"===========================WITHOUT AUTO==========================="<<std::endl;
    withoutAutoForIteration();
    cout<<"===========================WITH  + AUTO==========================="<<std::endl;
    usingAutoForIteration();
    
    cout<<"===========================Storage qualifiers==========================="<<std::endl;
    cout<<format("The value returned by function with automatic memory is:\n");
    cout<<format("First Run -> {}\n",returningVariableAutomatic());
    cout<<format("Second Run -> {}\n",returningVariableAutomatic());
    cout<<format("Third Run -> {}\n",returningVariableAutomatic());
    cout<<format("Fourth Run -> {}\n",returningVariableAutomatic());
//    The value returned by function with automatic memory is:
//    First Run -> 24
//    Second Run -> 24
//    Third Run -> 24
//    Fourth Run -> 24
    
    cout<<format("The value returned by function with static memory is:\n");
    cout<<format("First Run -> {}\n",returningVariableStatic());
    cout<<format("Second Run -> {}\n",returningVariableStatic());
    cout<<format("Third Run -> {}\n",returningVariableStatic());
    cout<<format("Fourth Run -> {}\n",returningVariableStatic());
//    The value returned by function with static memory is:
//    First Run -> 24
//    Second Run -> 25
//    Third Run -> 26
//    Fourth Run -> 27
    
    
    cout<<format("LEARNING about type aliasing: \n");
    scoreCard scoreCard_1{23,45};
    cout<<format("So rank:{} has a score of {}\n",scoreCard_1.r,scoreCard_1.p);
//    So rank:45 has a score of 23
    
    scoreCard_improved scoreCard_2{200,12};
    cout<<format("So rank:{} has a score of {}\n",scoreCard_2.p,scoreCard_2.r);
//    So rank:200 has a score of 12
    
    return 0;
}

void withoutAutoForIteration(void){
    vector<int> vec {1,2,3,4,5,6,7};
    for(vector<int>::iterator it = vec.begin(); it!=vec.end(); it++){
        cout<<format("Current val: {}\n",*it);
        cout<<format("type of it is, {}\n",typeid(vec).name());
    }
}
//Current val: 1
//type of it is, NSt3__16vectorIiNS_9allocatorIiEEEE
//Current val: 2
//type of it is, NSt3__16vectorIiNS_9allocatorIiEEEE
//Current val: 3
//type of it is, NSt3__16vectorIiNS_9allocatorIiEEEE
//Current val: 4
//type of it is, NSt3__16vectorIiNS_9allocatorIiEEEE
//Current val: 5
//type of it is, NSt3__16vectorIiNS_9allocatorIiEEEE
//Current val: 6
//type of it is, NSt3__16vectorIiNS_9allocatorIiEEEE
//Current val: 7
//type of it is, NSt3__16vectorIiNS_9allocatorIiEEEE

void usingAutoForIteration(void){
    vector<int> vec {1,2,3,4,5,6,7};
    for(auto it = vec.begin(); it!=vec.end(); ++it){
        cout<<format("Current val: {}\n",*it);
        cout<<format("type of it is, {}\n",typeid(vec).name());
    }
}
//Current val: 1
//type of it is, NSt3__16vectorIiNS_9allocatorIiEEEE
//Current val: 2
//type of it is, NSt3__16vectorIiNS_9allocatorIiEEEE
//Current val: 3
//type of it is, NSt3__16vectorIiNS_9allocatorIiEEEE
//Current val: 4
//type of it is, NSt3__16vectorIiNS_9allocatorIiEEEE
//Current val: 5
//type of it is, NSt3__16vectorIiNS_9allocatorIiEEEE
//Current val: 6
//type of it is, NSt3__16vectorIiNS_9allocatorIiEEEE
//Current val: 7
//type of it is, NSt3__16vectorIiNS_9allocatorIiEEEE

int returningVariableStatic(){
    static int a{23};
    return ++a;
}
int returningVariableAutomatic(){
    int a{23};
    return ++a;
}

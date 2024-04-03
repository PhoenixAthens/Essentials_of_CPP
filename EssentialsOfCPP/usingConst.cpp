//
//  usingConst.cpp
//  EssentialsOfCPP
//
//  Created by Anmol Khanna on 03/04/24.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int sum_of_vector();
int sum_of_vector_2();
int sum_of_vector_3();

int main(){
    cout<<"The sum is (contraint imposed) "<<sum_of_vector()<<endl;
    //The sum is (contraint imposed) 10
    
    cout<<"The sum is (contraint removed) "<<sum_of_vector_2()<<endl;
    //The sum is (contraint removed) 15
    
    cout<<"The sum is "<<sum_of_vector_3()<<endl;
    //The sum is 55
    
    size_t i = 23;
    cout<<"The size of i in memory is "<<sizeof(i)<<endl;
    //The size of i in memory is 8
}

//calculating sum of a vector
int sum_of_vector(){
    vector<int> v{1,2,3,4};
    int sum = 0;
    for(int i = 0;i<v.size();++i){
        sum+=v[i];
    }
    return sum;
}

//removing contrains caused by using int when looping over the vector
int sum_of_vector_2(){
    vector<int> v{1,2,3,4,5};
    int sum = 0;
    for(size_t i = 0;i<v.size();i++){
        sum+=v[i];
    }
    return sum;
}

//some further improvements
int sum_of_vector_3(){
    const vector<int> v{1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    for(size_t i = 0; i<v.size(); i++){
        sum+=v[i];
    }
    return sum;
}

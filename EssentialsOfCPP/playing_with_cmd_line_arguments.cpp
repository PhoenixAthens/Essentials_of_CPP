//
//  playing_with_cmd_line_arguments.cpp
//  EssentialsOfCPP
//
//  Created by Anmol Khanna on 04/04/24.
//

#include <iostream>
#include <array>
using std::cout;
using std::endl;
using std::cerr;
int main(int argc, char** argv){
    if(argc<6){
        cerr<<"Invalid number of arguments!"<<endl;
        return 1;
    }else{
        for(size_t i{0}; i<argc;i++){
            cout<<"At ["<<i<<"], we have "<<argv[i]<<endl;
        }
    }
    
    
    
    return 0;
}
//if we pass less than 6 arguments
//Invalid number of arguments!
//Program ended with exit code: 1

//else
//At [0], we have /Users/anmolkhanna/Library/Developer/Xcode/DerivedData/CPPest_BillW-eqkzfbaehjhykhfwlpimvyzknbte/Build/Products/Debug/EssentialsOfCPP
//At [1], we have first
//At [2], we have Hello There
//At [3], we have second
//At [4], we have third
//At [5], we have fourth
//Program ended with exit code: 0

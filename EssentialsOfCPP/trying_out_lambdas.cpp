#include <iostream>
#include <string>
constexpr auto fx = [] (std::string msg){
    return msg+"!\n";
};

//hello world c++11 style

constexpr auto greeting = "Hello Demons!";

//[] is called a capture, it's purpose is to capture elements from the environment, still working on understanding it properly!
auto another_greetin = [](std::string m){ return std::string("Hello ")+m;};

int main(int argc, char* argv[]){
    if(argc > 0){
        std::cout<<"hello "<<fx(argv[1]);
    }else{
        std::cout<<"hello world"<<std::endl;
    }
    std::cout<<greeting<<std::endl;
    //Hello Demons!
    
    std::cout<<another_greetin("Brev")<<std::endl;
    //Hello Brev
}

#include <iostream>
#include <format>
#include <string>

using std::cout;
using std::format;
using std::getline;
using std::cin;
using std::string;
using std::flush;

int main(int argc, char** argv){
    string name;
    cout<<format("Enter your name: ");
    cin >> name;
    cout<<format("Your name is {}\n",name);
//    Enter your name: Jason moma
//    Your name is Jason
    
    //moma is present in the buffer
    
    //cout<<std::endl; This doesn't work the way you suppose
    //cout<<flush; This doesn't work the way you suppose
    
    cout<<format("Enter your name again: ");
    getline(cin,name);
    cout<<format("Your name is {}\n",name);
//    Enter your name again: jason momoa
//    Your name is jason momoa
    
    return 0;
    
}

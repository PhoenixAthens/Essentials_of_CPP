#include <iostream>
#include <format>
using std::cout;
using std::flush;
using std::string;

int main(int argc, char** argv){
    string Text[] = {"one", "two", "three"};
    string* ptext = Text;

    //printing using array syntax
    for(auto& s: Text){
        cout<<s<<" "<<flush;
    }
    //one two three
    return 0;
}

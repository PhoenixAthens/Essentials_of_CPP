#include <iostream>
#include <format>
#include <sstream>
#include <string>
using std::stringstream;
using std::format;
using std::cout;
using std::string;

using sStream = stringstream;
//Why we need stringstream, because we cannot concatenate strings with other data types,
//we can concatenate "strings" with other "strings"
//BUT, we cannot concatenate "strings" with say, "ints"

int main(int argc, char** argv){
    string name = "Jason";
    int age = 102;
    sStream ss;
    ss << "The name is: ";
    ss << name;
    ss << "; The age is: ";
    ss << age;
    ss << "!\n";
    cout<<format("Message: {}\n",ss.str());
    return 0;
}
//Message: The name is: Jason; The age is: 102!

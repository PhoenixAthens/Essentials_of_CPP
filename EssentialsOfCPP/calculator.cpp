#include <iostream>
#include <format>
#include <string>
#include <cmath>
using std::cout;
using std::cerr;
using std::format;
using std::stod;

int main(int argc, char** argv){
    if(argc < 4){
        cerr<<format("Invalid number of arguments, required 4, received {}\n",argc);
        return 1;
    }else{
        auto op1 = stod(argv[1]);
        int operator_ = argv[2][0];
        auto op2 = stod(argv[3]);
        switch(operator_){
            case 43:
                cout<<format("Adding {} to {}\n",op1,op2);
                cout<<format("Result: {}\n",op1+op2);
                break;
            case 45:
                cout<<format("Subtracting {} from {}\n",op2,op1);
                cout<<format("Result: {:.5}\n",op1-op2);
                break;
            case 42:
                cout<<format("Multiplying {} with {}\n",op1,op2);
                cout<<format("Result: {}\n",op1*op2);
                break;
            case 47 :
                cout<<format("Divising {} by {}\n",op1,op2);
                cout<<format("Result: {:.5}\n",op1/op2);
                break;
            case 94 :
                cout<<format("Raising {} to {}\n",op1,op2);
                cout<<format("Result: {}\n\n",pow(op1,op2));
                break;
            case 37 :
                cout<<format("Calculating he remainder on dividing {} by {}\n",op1,op2);
                cout<<format("Result: {:.5}\n",fmod(op1,op2));
                break;
            default:
                cerr<<format("You might have interpreted my functionality wrong!");
                return 1;
        }
        return 0;
    }
}

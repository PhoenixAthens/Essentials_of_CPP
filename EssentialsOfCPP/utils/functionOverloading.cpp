#include <iostream>
#include <format>
using std::cout;
using std::cin;
using std::format;

void foo(int num){
    cout<<format("{} is a nice numbers!\n",num);
}
void foo(float num){
    cout<<format("{} is also a nice double!\n",num);
}
void foo(bool value){
    cout<<format("Always be {} to your booleans\n",value);
}
int main(int argc, char** argv){
    foo(5.6f);
    //foo("jacob"); //the compiler takes it as a call to foo(bool)
    foo(true);
    foo(300000000); //if I pass a value greater than int can hold, I get an error by clang saying
    //"call to foo is ambiguous" and the build fails
    
    //making program fail-proof
    long n;
    int temp;
    while(true){
        cout<<format("Enter a value: ");
        cin >> n;
        temp = (int)n;
        if(temp==n){
            break;
        }
    }
    foo(temp);
    //this way if you enter a value that exceeds int's capacity, you get prompted for again!
    
    
    if(cin>>n){
        cout<<"The value of n is: "<<n<<std::endl;
    }else{
        cout<<"The value of n was false"<<std::endl;
    }
    //The above conditional will run the else block for any non-numeric value! like say "Hello", true, etc!
    

    
}

//OUTPUT from
/*
 foo(5.6f);
 foo("jacob");
 foo(true);
 */
//5.6 is also a nice double!
//Always be true to your booleans
//Always be true to your booleans

/*
 foo(5.6f);
 foo(true);
 foo(23);
 */
//5.6 is also a nice double!
//Always be true to your booleans
//23 is a nice numbers!

/*
 
 
 */

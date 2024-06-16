#include <iostream>
#include <format>

using std::cout;

class Animal{
private:
    char* name;
public:
    void speak() const;
    void setName(char name[]);
    char* getName() const;
};
void Animal::speak() const{
    cout<<fmt::format("This animal can make you sad!! :>>\n");
    //const doesn't mean that all variables declared within will be constants, it applies only to member variables
    int value = 23;
    value = 44;
}
void Animal::setName(char name[]){
    this->name = name;
}
char* Animal::getName() const{
    return name;
}


//test-run
int main(int argc, char** argv){
    char name[] = "Rika Yamamoto";
    Animal a1;
    a1.setName(name);
    cout<< fmt::format("{} \n",a1.getName());
    a1.speak();
    
    //Rika Yamamoto
    //This animal can make you sad!! :>>
    
    
    int valueOfAge = 21;
    int* pAge = &valueOfAge;
    
    //let's declare the pointer to be constant
    const int* pAge2 = &valueOfAge; //this makes a read-only variable, can't use it to change the value of variable
    //*pAge2 = 45; //this will give an error saying "Read-only variable is not assignable"
    
    //BUT, we can do the following
    int anotherAge = 100;
    pAge2 = &anotherAge; //we can reassign the pointer to point to another value!
    
    int* const pAge3 = &valueOfAge; //this creates a pointer which can be used to change a variable's innner value but it's a constant pointer, meaning it cannot be reassigned to point to something else
    //thus we can do the following
    *pAge3 = 101;
    //but can't do this!
    //pAge3 = &anotherAge; //Cannot assign to variable 'pAge3' with const-qualified type 'int *const'
    
    //we can also create a constant pointer which can't be used to change the value stored at the memory location it points to
    const int* const pAge4 = &valueOfAge;
    //with 'pAge4' we can't do
    //either
    //pAge4 = &anotherAge; //Cannot assign to variable 'pAge4' with const-qualified type 'const int *const'
    //or
    //*pAge4 = 190; //Read-only variable is not assignable
    
    
}

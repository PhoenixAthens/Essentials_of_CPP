#include <iostream>
#include <format>
#include <string>

using std::string;
using std::format;
using std::cout;

const string unk {"unknown"};
const string clone_pref {"clone-"};

class Animal{
    string a_type{};
    string a_name{};
    string a_sound{};
    
public:
    Animal(); // default constructor
    Animal(const string& type, const string& name, const string& sound);
    Animal(const Animal& a); // copy constructor
    ~Animal(); // destructor
    Animal& operator = (const Animal& a); // copy/assignment operator
    void print() const;
};

Animal::Animal(): a_type(unk),a_name(unk),a_sound(unk){
    cout<<"default constructor\n";
}

Animal::Animal(const string& name, const string& type, const string& sound):
a_name(name),a_type(type), a_sound(sound){
    cout<<"constructor with arguments!\n";
}

Animal::Animal(const Animal& a){
    cout<<"copy constructor\n";
    a_name = clone_pref+a.a_name;
    a_type = a.a_type;
    a_sound = a.a_sound;
}

Animal::~Animal(){
    cout<<format("destructor: {} the {}\n",a_name,a_type);
}

Animal& Animal::operator = (const Animal& a){
    cout<<"assignment operator\n";
    if(this!=&a){
        a_name = clone_pref + a.a_name;
        a_type = a.a_type;
        a_sound = a.a_sound;
    }
    return *this;
}
void Animal::print() const{
    cout<<format("{} the {} says {}!\n",a_name,a_type,a_sound);
}

int main(int argc, char** argv){
    Animal a{};
    a.print();
    
    Animal b{"Bob","goat","Bah!"};
    b.print();
    
    Animal b_2("Bob2","goat","Bah!");
    b_2.print();
    
    Animal c{b};
    c.print();
    
    Animal c_2(b);
    c_2.print();
    
    c_2 = a;
    c_2.print();
    
    cout<<"End of MAIN!\n";
}
//default constructor
//unknown the unknown says unknown!
//constructor with arguments!
//Bob the goat says Bah!!
//constructor with arguments!
//Bob2 the goat says Bah!!
//copy constructor
//clone-Bob the goat says Bah!!
//copy constructor
//clone-Bob the goat says Bah!!
//assignment operator
//clone-unknown the unknown says unknown!
//End of MAIN!
//destructor: clone-unknown the unknown
//destructor: clone-Bob the goat
//destructor: Bob2 the goat
//destructor: Bob the goat
//destructor: unknown the unknown



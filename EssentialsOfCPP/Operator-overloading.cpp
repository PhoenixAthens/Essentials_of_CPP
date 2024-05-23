#include <iostream>
#include <format>
#include <string>
#include <numeric>

using std::format;
using std::cout;
using std::string;

const string nanstr {"[NAN]"};

class Rational{
    int n{0};
    int d{1};
public:
    Rational(int numerator = 0, int denominator = 1): n(numerator), d(denominator){
        if(d == 0){
            throw std::invalid_argument("Denominator cannot be zero!");
        }
    } //default constructor
    Rational(const Rational& rhs): n(rhs.n),d(rhs.d){} //copy-constructor
    ~Rational(); //destructor
    int numerator() const {return n;}
    int denominator() const {return d;}
    Rational reduce() const; //reduce fraction
    string str() const; //return a formatted STL string
    string raw_str() const; //return a non-reduced STL string
    Rational& operator = (const Rational&); //assignment
    Rational operator + (const Rational&) const;
    Rational operator - (const Rational&) const;
    Rational operator * (const Rational&) const;
    Rational operator / (const Rational&) const;
};

Rational Rational::reduce() const{
    if(n == 0 || d<= 3) return *this;
    for(auto div = d; div; --div){
        if(n % div == 0 && d % div == 0){
            return Rational(n/div,d/div);
        }
    }
    return *this;
}

string Rational::str() const{
    if(d==0) return nanstr;
    if(d==1 || n==0) return std::to_string(n);
    
    auto abs_n = abs(n);
    if(abs_n > d){
        auto whole = n/d;
        auto remainder = abs_n % d;
        if(remainder) return std::to_string(whole)+" "+Rational(remainder, d).str();
        else return std::to_string(whole);
    }else{
        return reduce().raw_str();
    }
}

string Rational::raw_str() const{
    return std::to_string(n) + "/" + std::to_string(d);
}
Rational& Rational::operator = (const Rational& rhs){
    if(this != &rhs ){
        n = rhs.n;
        d = rhs.d;
    }
    return *this;
}
Rational Rational::operator + (const Rational& rhs) const{
    return Rational((n * rhs.d + rhs.n * d ), (d* rhs.d));
}
Rational Rational::operator - (const Rational& rhs) const{
    return Rational((n * rhs.d - rhs.n * d), (d* rhs.d));
}
Rational Rational::operator * (const Rational& rhs) const{
    return Rational(n * rhs.n, d * rhs.d);
}
Rational Rational::operator / (const Rational& rhs) const{
    return Rational(n*rhs.d, d*rhs.n);
}

Rational::~Rational(){
    n = 0;
    d = 1;
}

int main(int argc, char** argv){
    int i = 23;
    int& j = i;
    int k = j;
    cout<<format("k's value: {}\n",k); //23
    k = 24;
    cout<<format("k's value: {}\n, j's value: {}\n, i's value: {}\n",k,j,i); //23
    
    cout<<format("============================\n");
    
    Rational a{7};
    cout<<format("a is: {} = {}\n",a.raw_str(),a.str());
    
    Rational b{25, 15};
    cout<<format("b is: {} = {}\n",b.raw_str(),b.str());
    
    auto c = b;
    cout<<format("c is: {} = {}\n",c.raw_str(),c.str());
    
    Rational d;
    cout << format("d is: {} = {}\n",d.raw_str(),d.str());
    
    d = c;
    cout << format("d is: {} = {}\n",d.raw_str(),d.str());
    
    auto& e = d; //reference (no use of copy constructor or assignment operator)
    d = e;
    cout << format("e is: {} = {}\n",e.raw_str(),e.str());
    cout << format("d is: {} = {}\n",d.raw_str(),d.str());
    
    cout << '\n';
    cout << format("a + b = {}\n",(a + b).str());
    cout << format("a - b = {}\n",(a - b).str());
    cout << format("a * b = {}\n",(a * b).str());
    cout << format("a / b = {}\n",(a / b).str());
    
    //demonstrating need for non-member operator overloading
    cout<<format("a + 15: {}\n",(a+15).str()); //a + 15: 22
    //How the above code worked, well the compiler called the constructor of Rational that could
    //accomodate taking a single argument. this is an example of implicit type-casting in a sense
    
    cout<<format("15 + a: {}\n",(15+a).str());//Invalid operands to binary expression ('int' and 'Rational')
    //Now this won't work!!
    //This is where non-member operator overloading comes into play
    //operator-overloading-2.cpp
    
    
}

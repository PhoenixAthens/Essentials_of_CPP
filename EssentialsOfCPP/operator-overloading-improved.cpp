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
    
    Rational reduce_2() const;
    string str() const; //return a formatted STL string
    string raw_str() const; //return a non-reduced STL string
    Rational& operator = (const Rational&); //assignment
    Rational operator + (const Rational&) const;
    Rational operator - (const Rational&) const;
    Rational operator * (const Rational&) const;
    Rational operator / (const Rational&) const;
};
//why are we returning *this?
//why are we returning when d<=3
//when we return 'Rational' are we returning a temporary object
Rational Rational::reduce() const{
    if(n == 0 || d<= 3) return *this;
    for(auto div = d; div; --div){
        if(n % div == 0 && d % div == 0){
            return Rational(n/div,d/div);
        }
    }
    return *this;
}
Rational Rational::reduce_2() const{
    if(n==0 || d<=3)return *this;
    int g = std::gcd(n,d);
    return Rational(n/g,d/g);
}

//examine bill's code

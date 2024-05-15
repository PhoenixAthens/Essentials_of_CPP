#include <iostream>
#include <format>
#include <string>

using std::format;
using std::cout;
using std::string;

const string nanstr {"[NAN]"};

class Rational{
    int n{0};
    int d{1};
public:
    Rational(int numerator = 0, int denominator = 1): n(numerator), d(denominator){}
    Rational(const Rational& rhs): n(rhs.n),d(rhs.d){} //copy-constructor
    ~Rational();
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

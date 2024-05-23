#include <format>
#include <iostream>
#include <string>
#include <numeric>

using std::format;
using std::cout;
using std::string;
using std::to_string;

const string nanstr {"[NAN]"};

class Rational{
    int n{0};
    int d{1};
    
public:
    Rational(int numerator = 0, int denominator = 1):n(numerator),d(denominator){
        if(d==0){
            throw std::invalid_argument("Denominator cannot be 0!");
        }
    }
    Rational(const Rational& rhs): n(rhs.n),d(rhs.d){}
    ~Rational();
    int numerator() const {return n;}
    int denominator() const {return d;}
    Rational reduce() const;
    string raw_str() const;
    string str() const;
    Rational& operator = (const Rational&);
    //Rational operator + (const Rational&) const;
    Rational operator - (const Rational&) const;
    Rational operator * (const Rational&) const;
    Rational operator / (const Rational&) const;
};

Rational Rational::reduce() const{
    if(n == 0 || d == 1) return *this;
    for(auto i = d; i; i--){
        if(n%i==0 && d%i==0){
            return Rational(n/i,d/i);
        }
    }
    return *this;
}

string Rational::str() const{
    if(d==0)return nanstr;
    if(d==1 || n==0)return to_string(n);
    auto abs_n = abs(n);
    if(abs_n > d){
        int remainder = abs_n % d;
        abs_n = abs_n/d;
        if(remainder) return to_string(abs_n) + " " + Rational(remainder,d).str();
        else return to_string(abs_n);
    }else{
        return reduce().raw_str();
    }
}
string Rational::raw_str() const{
    return to_string(n)+"/"+to_string(d);
}
Rational& Rational::operator = (const Rational& rhs){
    if(this != &rhs){
        n = rhs.n;
        d = rhs.d;
    }
    return *this;
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

//non-member operator overloading:
Rational operator + (const Rational& lhs, const Rational& rhs) {
    return Rational((lhs.numerator() * rhs.denominator() + rhs.numerator() * lhs.denominator() ), (lhs.denominator() * rhs.denominator()));
}

int main(int argc, char** argv){
    //Now both statements specified below will work!
    Rational a{23,34};
    cout<<format("a + 15: {}\n",(a+15).str());
    cout<<format("15 + a: {}\n",(15+a).str());
//    a + 15: 15 23/34
//    15 + a: 15 23/34
    
    cout<<format("a + 15: {}\n",(a+15).raw_str());
    cout<<format("15 + a: {}\n",(15+a).raw_str());
//    a + 15: 533/34
//    15 + a: 533/34
}

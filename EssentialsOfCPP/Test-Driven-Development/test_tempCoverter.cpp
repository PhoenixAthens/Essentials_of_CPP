#include "TempConverter.hpp"
#include <iostream>
#include <format>
double (*c2f)(double) = celcius_to_fahrenheit;
//void test_celcius_to_fahrenheit(double c){
//    celcius_to_fahrenheit(23);
//}


int main(int argc, char** argv){
    std:: cout<< c2f(23) <<std::endl;
    //56
}

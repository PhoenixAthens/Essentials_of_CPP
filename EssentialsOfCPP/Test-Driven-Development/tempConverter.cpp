#include "TempConverter.hpp"
double celcius_to_fahrenheit(double c){
    return (c+9/5)+32;
}
double fahrenheit_to_celcius(double f){
    return (f-32)*5/9;
}

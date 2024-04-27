//
//  learning_header_files.cpp
//  EssentialsOfCPP
//
//  Created by Anmol Khanna on 15/04/24.
//
//to use the include directory, simple use the following path, rather than "../include/geometry.h" or something like that
#include "include/geometry.h"
#include <iostream>
#include <cmath>
double calc_area_of_circle(double radius){
    return 3.14519 * std::pow(radius,2);
}
int main(){
    std::cout<<"Area: "<<calc_area_of_circle(4.5)<<std::endl;
}

//
//  main.cpp
//  CPP98-The-Complete-Reference
//
//  Created by Anmol Khanna on 22/05/24.
//

#include <iostream>
#include <limits>
#include <format>

using std::cout;
using std::numeric_limits;
using std::format;

int main(int argc, const char * argv[]) {
    cout<<format("Largest float: {}\n, is char signed: {}\n",numeric_limits<float>::max(),numeric_limits<char>::is_signed);
    return 0;
}
//Largest float: 3.4028235e+38
//, is char signed: true

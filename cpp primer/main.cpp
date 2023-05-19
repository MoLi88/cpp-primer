//
//  main.cpp
//  cpp primer
//
//  Created by Mo Li on 5/2/23.
//

#include <iostream>
#include "structure.hpp"
void bucks(double);

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    cout << "Hello, World!\n";
    cout << "lalala";
    cout << endl;
    bucks(1234.56);
    cout << endl;
    cout << "max int is " << INT_MAX << endl;
    float a = 2.34E+6;
    float b = a + 1;
    cout << "difference " << b - a << endl;
    char grade = 65;
    cout << "grade is " << grade << endl;
    structure();
    return 0;
}

void bucks(double n) {
    std::cout << n;
}

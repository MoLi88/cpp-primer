//
//  structure.cpp
//  cpp primer
//
//  Created by Mo Li on 5/18/23.
//

#include "structure.hpp"
#include <iostream>

struct inflatable {
    char name[20];
    float volume;
    double price;
};

int structure() {
    using namespace std;
    inflatable guest = {"Glorious Gloria", 1.88, 29.99};
    inflatable pal = {"Audacious Arthur", 3.12, 32.99};
    
    cout << "name is  " << guest.name << " and " << pal.name << endl;
    cout << "price  " << guest.price << " and " << pal.price << endl;
    return 0;
}

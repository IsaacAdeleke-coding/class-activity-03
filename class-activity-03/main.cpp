//
//  main.cpp
//  class-activity-03
//
//  Created by Isaac Adeleke on 9/14/24.
//

#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    // Seed the random number generator with the current time
    // Using bitwise AND with 0xFFFFFFFF to ensure it fits within an unsigned int
    srand(time(0) & 0xFFFFFFFF);

    int minValue = 1;
    int maxValue = 6;

    // Rolling two dice using the formula [rand() % (maxValue - minValue + 1)] + minValue
    int die1 = (rand() % (maxValue - minValue + 1)) + minValue;
    int die2 = (rand() % (maxValue - minValue + 1)) + minValue;

    // Output the result
    cout << "Die 1: " << die1 << ", Die 2: " << die2 << endl;

    return 0;
}


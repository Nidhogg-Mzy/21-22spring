#include "lamp.h"       /* File: lamp-test.cpp */

int main()
{
    Lamp lamp1(4, 100.5); // lamp1 costs HKD100.5 itself; needs 4 bulbs
    Lamp lamp2(2, 200.6); // lamp2 costs HKD200.6 itself; needs 2 bulbs
    
    // Install 4 bulbs of 20 Watts, each costing HKD30.1 on lamp1
    lamp1.install_bulbs(20, 30.1);
    lamp1.print("lamp1");

    // Install 2 bulbs of 60 Watts, each costing HKD50.4 on lamp2
    lamp2.install_bulbs(60, 50.4);
    lamp2.print("lamp2");

    return 0;
}
/* To compile: g++ -o lamp-test lamp-test.cpp bulb.cpp lamp.cpp */

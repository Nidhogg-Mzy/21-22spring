#include "bulb.h"       /* File: lamp.h */

class Lamp
{
  private:
    int  num_bulbs; // A lamp MUST have 1 or more light bulbs 
    Bulb* bulbs;    // Dynamic array of bulbs installed onto a lamp
    float price;    // Price of a lamp, NOT including price of its bulbs
    
  public:
    Lamp(int n, float p); // n = number of bulbs; p = lamp's price
    ~Lamp();
    
    int total_power() const; // Total power/wattage of the light bulbs
    float total_price() const; // Price of a lamp PLUS its light bulbs

    // Print out a lamp's information; see outputs from our example 
    void print(const char* prefix_message) const;

    // All light bulbs of a lamp have the same power/wattage and price:
    // w = a light bulb's wattage; p = a light bulb's price
    void install_bulbs(int w, float p);
};

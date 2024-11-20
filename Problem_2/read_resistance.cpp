/////////////////////////////////////////////////////
// Filename : read_resistance.cpp
// Author : Sed Centeno
// Date : 11/19/2024
//
// Description :
// Determines the resistance of a resistor placed in a specific
// circuit (See Homework 11)
//
// Arguments :
// None
//
// Example Invocation :
// ./read_resistance
//////////////////////////////////////////////////////
#include <iostream>
#include "AnalogIn.h"

#define VADC 1.80f
#define MAX_ADC 4096.0f
#define R1 10000.0f
#define R_K 1000.0f

using namespace std;

int main(){
  AnalogIn AIN(0);
  
  float Vx = (((float)AIN.readAdcSample())*VADC)/MAX_ADC;
  cout << "Vx = " << Vx << "V" << endl;

  float I = (VADC - Vx)/R1;
  cout << "I = " << I << "A" << endl;

  float R2 = Vx/I;

  if (R2 >= R_K){
    cout << "R2 = " << R2/R_K << "K Ohms" << endl; 
  }else{
    cout << "R2 = " << R2 << "Ohms" << endl;
  }

  return 0;
}

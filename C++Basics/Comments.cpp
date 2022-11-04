// File Name: health.cpp (Your system may require some suffix other than cpp.)
// Author: Fraser Nxumalo
// Email Address: 3538264@myuwc.ac.za
// Assignment Numnber: 2
// Description: Program to determine if the user is ill.
// Last Changed: November 04 2022

#include <iostream>
using namespace std;
int main()
{
  const double Normal = 98.6; // degresss Fahrenheit
  double temperature;
  
  cout << "Enter your temperature: ";
  cin >> temperature;
  
  if(temperature > Normal){
    
    cout << "You have a fever.\n";
    cout << "Drink lots of liquids and get to bed.\n";
    
  }
  else
  {
    cout << "You don't have a fever.\n";
    cout << "Go study.\n";
  }
   
  return 0;
  
}

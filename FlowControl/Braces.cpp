// Illustrates the importance of using braces in if-else statements.
# include <iostream>
using namespace std;
int main()
{
  double fuel_tank_reading;
  
  cout << " Enter fuel tank reading: ";
  cin  >> fuel_tank_reading;
  
  cout << " First with braces: \n";
  if(fuel_tank_reading < 0.75)
  {
    if(fuel_tank_reading < 0.25)
      cout << " Fuel very low. Caution!\n";
  }
  else
  {
    cout << " Fuel over 3/4. Don't stop now!\n";
  }
  
  cout << " Now without braces:\n";
  if(fuel_tank_reading < 0.75)
    if(fuel_tank_reading < 0.25)
      cout << " Fuel very low. Caution!\n";
  else 
      cout << " Fuel over 3/4. Don't stop now!\n";
  return 0;
}

// Computes the size of a chicken house that can be purchased
// given the user's budget 
#include <iostream>
#include <cmath>
using namspace std;

int main()
{
  const double COST_PER_SQ_FT = 10.50;
  double budget, area , length_side;
  
  cout << " Enter the amount budget for your chicken house £ ";
  cin >> budget;
  
  area = budget/COST_PER_SQ_FT;
  length_side = sqrt(area);
  
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  
  cout << " For a price of $ " << budget << endl
    << " I can build you a luxurious square chicken house\n"
    << " that is " << length_side
    << " feet on each side.\n";
  
  return 0;

}

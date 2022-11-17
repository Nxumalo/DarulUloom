// Illustrate a for loop.
#include <iostream>
using namespace std;

int main()
{
  int sum = 0;
  
  for (int n = 1; n <= 100; n++)
    sum = sum + n;
    
  cout << " The sum of the numbers 1 to 100 is "  
    << sum << endl;
    
  return 0;  
}

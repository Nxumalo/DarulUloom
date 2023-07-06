// Illustrates overloading the function name ave.
#include <iostream>

double ave(double n1, double n2);
// Returns the average of the numbers n1 and n2.

double ave(double n1, double n2, double n2);
// Returns the average of the three numbers n1, n2, and n3.

int main()
{
    using namespace std;
    cout << " The average of 2.0, 2.5 and 3.0 is "
        << ave(2.0, 2.5, 3.0) << endl;
    return 0;
}

double ave(double n1, double n2)
{
  return ((n1 + n2)/ 2.0);
}

double ave(double n1, double n2, double n3)
{
  return ((n1 + n2 + n3)/3.0);
}

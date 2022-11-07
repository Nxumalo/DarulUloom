#include <iostream>
using namespace std;
int main(){
  double balance = 200.00;
  int count = 0;
   
  cout << "This program tells you how long it takes \n"
       << "to accumulate a debt of R1200, starting with\n"
       << "an initial balance of R200 owed.\n"
       << "The interest rate is 2% per month.\n";

  while (balance < 100.00)
  {
    balance = balance + 0.02 * balance;
    count++;
  }
  
  cout << "After " << count << "months,\n";
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  cout << "your balance due will be R" << balance << endl;
  
  return 0;
    
      
}

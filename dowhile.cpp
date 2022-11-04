#include <iostream>
using namespace std;
int main()
{
 char ans;
 do{
    cout << "Sawubona unjani\n";
    cout << "Do you want another greeting?\n"
         << "Press y fpr yes, n for no,\n
         << "and then press return: ";
    cin >> ans;
 }    while (ans =='y'|| ans == 'Y');
  
  cout << "Hamba kahle\n";
  return 0;

}

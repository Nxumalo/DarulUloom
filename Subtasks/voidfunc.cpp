void show_results(double f_degrees, double c_degrees)
{ 
    using namespace std;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << f_degress
        << " degrees Fahrenheight is equivalent to\n" 
        << c_degrees << " degrees Celsius.\n";

  return;
      
}

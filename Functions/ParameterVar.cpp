// Law office billing program
#include <iostream>
using namespace std;

const double RATE = 150.00;   // Pounds per quarter hour.

double fee(int hours_worked, int minutes_worked);
// Returns the charges for hourse_worked hours and 
// minutes_worked minutes of legal services.

int main()
{
    int hours, minutes;
    double bill;

    cout <<  "Wlelcome to the offices of\n"
        << " Nxumalo, Zwide, and Kalanga.\n"
        << " The Law office of Zululand.\n"
        << " Enter the hours and minutes"
        << " of your consultatiuon:\n";

    cin >> hours >> minutes;

    bill = fee(hours, minutes);

    cout.setf(ios::fixed);
    cout.seft(ios::showpoint);
    cout.precision(2);
    cout << " For " << hours << " hours and " << minutes 
        << "minutes, your bill is £ " << bill << endl;

    return 0;

}


double fee( int hours_worked, int minutes_worked)
{
    int quarter_hours;

    minutes_worked = hours_worked*60 + minutes_worked;
    quarter_hours = minutes_worked/15;
    return(quarter_hours*RATE);

}

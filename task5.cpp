#include <iostream>
using namespace std ;
main ()
{
int hrs;
int mins;
int time;
int minutes;
cout << "Enter time in hours: ";
cin >> hrs;
cout << "Enter time in minutes: ";
cin >> mins;
minutes = mins + 15;

if ( minutes >= 60)
{
    hrs = hrs+ 1;
}
time =hrs %24;
minutes = minutes%60;
    cout << "The time after 15 minutes will be " << time << ":" << minutes ;
}
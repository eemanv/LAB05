#include <iostream>
#include <cmath>
using namespace std;

main()
{
 float num1;
 float num2;
 float result; 
 cout << "Enter Number: ";
 cin >> num1;
 cout << "Enter Number: ";
 cin >> num2;
 
 result = max (num1 , num2);
 cout << "Maximum number= " << result << endl ;

 result = min (num1 , num2);
 cout << "Minimum number= " << result << endl ;

 result = sqrt(num2);
 cout << " sq. root = " << result << endl ;

 result = cbrt ( num1);
 cout << " cbrt. root = " << result << endl ;

 result = pow ( num1, 4);
 cout << " power = " << result << endl ;

 result = ceil (32.1);
 cout << " number = " << result << endl ;

 result = floor(4.1);
 cout << " number = " << result << endl ;


}
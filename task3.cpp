#include <iostream>
#include <cmath>
using namespace std;

bool isSymmetrical(int number);


main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    bool result;
    result=  isSymmetrical(number);
    cout << result;
}
bool isSymmetrical(int number)
{
 int x;
 int y;
 int z;

 x=number %10; 
 number=number/10;

 y=number%10;
 number=number/10;

 z=number;

 if (x==z)
 {
  cout << "Your number is symmetrical" << endl;
    return true;
 }
 if (x !=z)
  {
    cout << "Your number is not symmetrical" << endl;
    return false;
  }
 }
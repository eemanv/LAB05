#include <iostream>
using namespace std;
int add (int number1 , int number2);
float divide ( float number1 , float number2);
main () 
{
 float result;
 result = add (1 , 2);
 cout << " Add result is " << result << endl;
 result =divide (10,2 );
 cout << " Result is " << result << endl;
}
int add (int number1 , int number2)
{ 
 int sum = number1 + number2;
 return sum ;
}
float divide ( float number1 , float number2)
{
 float result = number1/number2 ;
 return result ;
}
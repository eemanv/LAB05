#include <iostream>
#include <cmath>
using namespace std;

float positiveX( float a , float b , float c);
float negativeX(float a , float b , float c);
main()
{
 float a;
 float b;
 float c; 
 float result;
 float result2;
 cout << "Enter Number: ";
 cin >> a;
 cout << "Enter Number: ";
 cin >> b;
 cout << "Enter Number: ";
 cin >> c;

 result=positiveX( a , b , c);
 cout << "Positive: " << result << endl ;

 result2=negativeX(  a , b , c);
 cout << "Negative: " << result2 << endl ;
 

}

float positiveX( float a , float b , float c)
{

float ac;
float square;
float underoot;
float buffer1;
float buffer2;
float buffer3;

ac=4*a*c;
square=pow(b, 2);
buffer1=square-ac;

underoot=sqrt(buffer1);
buffer2=-b+underoot;
buffer3=buffer2/(2*a);

return buffer3;




}
float negativeX(float a , float b , float c)
{

float ac;
float square;
float underoot;
float buffer1;
float buffer2;
float buffer3;

ac=4*a*c;
square=pow(b, 2);
buffer1=square-ac;

underoot=sqrt(buffer1);
buffer2=-b-underoot;
buffer3=buffer2/(2*a);

return buffer3;
}
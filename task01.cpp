#include <iostream>
#include <cmath>
using namespace std;

float calculateHeight(float distance, float angle);

main()
{
 float distance;
 float angle;
 float height;
 cout << " Enter distance: " ;
 cin >> distance;
 cout << " Enter angle: ";
 cin >> angle;
 height = calculateHeight( distance , angle);
 cout << " Height is " << height ; 
}


float calculateHeight(float distance, float angle)
{
 float radian;
 float radians;
 float height;
 
 radian= 57.2958;
 radians= angle/ radian ;
 angle = tan (radians);
 height = angle* distance;
 return height;
} 



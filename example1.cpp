#include <iostream>
using namespace std;
int isGreater(int number1 , int number2);
int minimum( int number1 , int number2);
main ()
{
 int number1 , number2;
 int a;
 int min;
 a = isGreater (16 ,18);
 cout << "Greater number is " << a << endl;
 min = minimum(16 , 18);
 cout << "Minimum number is " << min << endl;
}

int isGreater(int number1 , int number2)
{
 if (number1 > number2)
  { 
   return number1;
  }
 if (number1 < number2)
  { 
   return number2;
  }
 return 0;
}

int minimum( int number1 , int number2)
{
 if (number1 > number2)
  { 
   return number2;
  }
 if (number1 < number2)
  { 
   return number1;
  }
 return 0;
}

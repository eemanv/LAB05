#include <iostream>
using namespace std;


string ones(int number);
string tens(int number);

main()
{
    int number;
    cout << "Enter a number";
    cin >> number;
    int a=number/10;
    int b=number%10;
    string firstDigit, lastDigit;

    firstDigit = tens(a);
    lastDigit = ones(b);

    cout << firstDigit << lastDigit << endl;
}
string ones(int number)
{
  if (number==1)
     {
        return "one";
     }
  if (number == 2)
     {
       return "two";
     }
  if (number == 3)
     {
        return "three" ;
     }
   if (number== 4)
    {
        return "four";
    }  
    if (number == 5)
    {
        return "five";
    }
    if (number ==6)
    {
        return "six";
    }
    if (number == 7)
    {
        return "seven";
    }
    if (number == 8)
    {
        return "eight";
    }
    if (number ==9)
    {
        return "nine";
    }
return 0;
}

  string tens(int number)
   {
    if (number == 0)
    {
        return "";
    }
    if (number== 2)
     {
        return "twenty";
     }
   if (number == 3)
     {
       return "thirty";
     }
   if (number== 4)
    {
        return "forty";
    }  
    if (number == 5)
    {
        return "fivety";
    }
    if (number ==6)
    {
        return "sixty";
    }
    if (number == 7)
    {
        return "seventy";
    }
    if (number == 8)
    {
        return "eighty";
    }
    if (number ==9)
    {
        return "ninety";
    }
    return 0;
   }

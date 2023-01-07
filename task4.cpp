#include <iostream> 
using namespace std;
string add(int number);


main()
{
int number;
string result;
cout << "Enter number: ";
cin >> number;
result =add (number);
cout << result;
}


string add(int number)
{
 int mod1;
 int mod2;
 int mod3;
 int mod4;
 int mod5;
 int total;
 int q1;
 int q2;
 int q3;
 int q4;
 int q5;

 mod1=number%10;
 q1=number/10;
 mod2=q1%10;
 q2= q1/10;
 mod3=q2%10;
 q3=q2/10;
 mod4=q3%10;
 q4=q3/10;
 mod5=q4%10;
 total = mod1 + mod2 + mod3 + mod4 +mod5;
   if (total%2 == 0 )
    {
       return "Evenish";
    }
   if (total%2 !=0)
    {
        return "Oddish";
    }
  return 0;
}
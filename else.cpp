#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

int main ()
   {int age;
     cout<<"Enter Your Age:";
     cin>>age;
     cout<<endl;


   //start a condition to deny age of 100+ entry

     if(age>=100)
        {
         cout<<"You are too old to access this site";
        }

   //start with the condition to allow age of 18 and above thus using greater than or equals to.

     else if(age>=18)
        {
         cout<<"Access granted";
        }

   //start a condition to deny age of -0 entry

     else if(age<0)
        {
         cout<<"You haven't been born yet";
        }

   //start a condition to deny entry of anything out of the bracket of 18+

     else
        {
            cout<<"ENTER A VALID NUMBER";
        }

        cout<<endl;

    return 0;}

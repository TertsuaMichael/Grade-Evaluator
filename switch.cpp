#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>

   using std::cout;
   using std::cin;
   using std::endl;
   using std::string;

   int main()
   {
     char grade;
     cout<<"Enter your grade :";
     cin>>grade;
     cout<<endl;

     switch (grade)
       {
          case 'A':
                cout<<"Outstanding work! Excellent";
                break;

          case 'B':
                cout<<"Very Good";
                break;

          case 'C':
                cout<<"Solid Effort";
                break;

          case 'D':
                cout<<"You passed";
                break;

          case 'E':
                cout<<"Fairly Passed";
                break;

          case 'F':
                cout<<"Failed";
                break;

          default:
                cout<<"Enter a valid grade (A-F)";



       }




     cout<<endl;
     return 0;
    }

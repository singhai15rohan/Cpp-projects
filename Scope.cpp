#include<iostream>
using namespace std;
int c = 50; //global var
int main()
{
 int a =10,b=20;
 int c = a+b; // local var
 //********Reference variable**********////////
 int d= c;
 cout<<"Local c is : "<<c<< endl<<d;
 cout<<"Global c is : "<<::c; // :: Scope resolution operator
 return 0;
}
#include<iostream>
using namespace std;

int c = 50;
// Global variable//
int main()
{
    int a,b,c;
    cout<<"Enter a: "<<endl;
    cin>>a;
    cout<<"Enter b: "<<endl;
    cin>>b;
    c= a+b;
    cout<<"Sum is : "<<c<<endl;
    cout<<"global variable C is : "<<::c<<endl;

    float d = 35.5F;
    long double e = 50.99L;
    cout<<"Size of 35.5f is "<<sizeof(35.5f)<<endl; 
    cout<<"Size of 35.5F is "<<sizeof(35.5F)<<endl; 
    cout<<"Size of 35.5l is "<<sizeof(35.5l)<<endl; 
    cout<<"Size of 35.5L is "<<sizeof(35.5L)<<endl; 

    //REFERENCE variable
    float x = 100;
    float &y = x;
    cout << x<<endl;
    cout << y<<endl;


    //**********TYPECASTING**************
    int r = 50;
    int s = 51.55;
    cout<<"Value of r is "<<(float)r<<endl;
    cout<<"Value of r is "<<(int)s<<endl;
}
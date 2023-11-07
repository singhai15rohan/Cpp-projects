#include<iostream>
using namespace std;
int main()
{
    // local variable is superior over global var//
    int a = 10;
    int b = 20;
    float pi = 3.14;
    char c = 'r';
    string name = "rohan";
    bool x = true;
    bool y = false;

    cout<<x;
    cout<<y;

    cout<<"Value of a is "<<a<<" value of b is "<<b;
    cout<<endl;
    cout<<"Value of pi is "<<pi;
    cout<<endl; 
    cout<<"Value of c is "<<c;
    cout<<endl;
    cout<<"Value of name is "<<name;
    return 0;
}


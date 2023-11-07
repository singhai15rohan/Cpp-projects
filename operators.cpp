// #include "this.h" 1--> This will produce an error if this.h is not 
// present in the current directory//

// 1. System header file 2. user defined header files//
#include <iostream> 
using namespace std;
int main()
{
    //ARITHMETIC OPERATORS//
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"Performing operations"<<endl;
    cout<<"value of a + b is "<< a+b<<endl;
    cout<<"value of a - b is "<< a-b<<endl;
    cout<<"value of a * b is "<< a*b<<endl;
    cout<<"value of a / b is "<< a/b<<endl;
    cout<<"value of a % b is "<< a%b<<endl;

    cout<<endl;

    cout<<"comaprison opt"<<endl;
    cout<<"value of a==b is "<<(a==b)<<endl;
    cout<<"value of a!=b is "<<(a!=b)<<endl;
    cout<<"value of a>=b is "<<(a>=b)<<endl;
    cout<<"value of a<=b is "<<(a<=b)<<endl;
    cout<<"value of a>b is "<<(a>b)<<endl;
    cout<<"value of a<b is "<<(a<b)<<endl;

    cout<<"LOGICAL opt"<<endl;
    cout<<"value of ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
    
 
    return 0;


}

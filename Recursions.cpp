#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);
    /*
    let n = 5 , 5*fact(4) -> 5*4*fact(3) -> 5*4*3*2*fact(1)
    */
}
int main(){
    cout<<"formula of factorial-> n! = n * (n-1)! "<<endl;
    int number;
    cout<<"Enter the number to calculate factorial: "<<endl;
    cin>>number;
    
    cout<<"Factorial of "<<number<<" :"<<factorial(number);
    return 0;
}
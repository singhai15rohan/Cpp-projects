#include<iostream>
using namespace std;

int fib(int n)
{
    if(n<=2)
    {
        return 1;
    }
    return (n-2)+(n-1);
}
int main(){
    int num;
    cout<<"Enter num: ";
    cin>>num;
    fib(num);
    return 0;
}
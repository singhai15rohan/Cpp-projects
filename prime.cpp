#include<iostream>
using namespace std;
int main()
{
    int prime,times_divided=0;
    cout<<"Enter number to check: ";
    cin >> prime;
    for(int i=1;i<=prime;i++)
    {
        if(prime%i==0)
        {
            times_divided++;
        } 
    }
    if(times_divided == 2)
        {
            cout << "Prime no.";
        }
        else{
            cout << "Not prime";
        }
}
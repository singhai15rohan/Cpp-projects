#include<iostream>
using namespace std;
int add(int n1,int n2);
int main()
{
    
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    add(a,b);
} // namespace std
int add(int n1,int n2)
{
    int sum=n1+n2;
    cout<<sum;
    return 0;
}
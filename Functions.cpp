#include<iostream>
using namespace std;
// function prototyping
void print()
{
    cout<<"Hello world"<<endl;
}
int sum(int a ,int b)
{
    int c = a+b;
    return c;
}
// string name(string first , string last)
// {

//     cout<<first<<endl<<last;
// }
int main(){
    print();
    // string a,b;
    // cout<<"Enter first andd last name: "<<endl;
    // cin>>a;
    // cin>>b;
    // name(a,b);
    int n1,n2;
    cout<<"ENter: ";
    cin>>n1>>n2;
    // n1 and  n2 are actual parameters
    int res = sum(n1,n2);
    cout<<"Sum is: "<<res;
    return 0;
}
// int a and b are formal parameters

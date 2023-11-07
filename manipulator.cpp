#include<iostream>
#include<iomanip>
 using namespace std;
int main()
{
    // SETW takes width as given
    int a = 1,b=10,c=100,d=1000;
    // setw is set width
    int e;
    cin>>e;
    cout<<"a: "<<setw(10)<<a<<endl;
    cout<<"b: "<<setw(10)<<b<<endl;
    cout<<"c: "<<setw(10)<<c<<endl;
    cout<<"d "<<setw(10)<<d<<endl;
    cout<<"e "<<setw(10)<<e<<endl;
}
// int main()
// {
//     int n,i;
//     cin>>n;
//     for(i=n;i<=n*10;i=i+n)
//     {
//         cout<<i<<" ";
//     }
// }
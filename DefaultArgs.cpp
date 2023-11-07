#include<iostream>
using namespace std;

// interest is default argumment here 
float moneyrcvd(int current_balance, float interest = 1.04)
{
    return current_balance*interest;
}
/*
constant argument
int strlen(const char *p)
{

}
*/
int main(){
    int money;
    cout<<"Enter amount lent: "<<endl;
    cin>>money;
    // no need of passing other argument after passing default one
    cout<<"Amount recieved after interest: "<<moneyrcvd(money)<<" rs. after one year"<<endl;
    cout<<"Amount recieved for VIP (inetrest is 1.10%) after interest: "<<moneyrcvd(money,1.10)<<" rs. after one year"<<endl;
    return 0;
}
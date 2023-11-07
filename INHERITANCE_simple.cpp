//rohan inheritance

//simple inheritance
#include<iostream>
using namespace std;
class Bank{
    public:
    string acc_type ;
};
class User:public Bank
{
    public:
    string name;
    int account_no ;
    float balance ;
    void input()
    {
        cout<<"Account type: "<<endl;
        cin>>acc_type;
        cout<<"Enter name: "<<endl;
        cin>>name;
         cout<<"Enter account_no: "<<endl;
        cin>>account_no;
         cout<<"Enter balance: "<<endl;
        cin>>balance;
    }
    void display()
    {
         cout<<"Details of bank and user: "<<endl;
    // cout<<"Number of accounts in bank: "<<object.account<<endl;
    cout<<"Account type: "<<acc_type<<endl;
    cout<<"User name: "<<name<<endl;
    cout<<"Account number : "<<account_no<<endl;
    cout<<"balance: "<<balance<<endl;
    }
};
int main()
{
    User object;
    object.input();
    object.display();
   
}
// #include <iostream>

// using namespace std;
// class Parent{
//     public:
//     float salary = 50000;
// };
// class child:public Parent
// {
//     public:
//     float bonus = 10000;
//     void display()
//     {
//         cout<<"salary: "<<salary<<endl<<"Bonus: "<<bonus;
//     }
// };

// int main()
// {
//     child obj1;
//     obj1.display();
//     return 0;
// 
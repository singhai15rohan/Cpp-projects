#include<iostream>
using namespace std;
// call by reference    
void swap_ptr(int* a,int* b)
{
    int temp;
    // value is changed of address by derefrencing
    temp = *a;
    *a = *b;
    *b =temp;
}
// int & swap_refVar(int &a,int &b)
// {
//     int temp = a;
//     a = b;
//     b =temp;
//     return a;
// }
void swap_refVar(int &a,int &b)
{
    int temp = a;
    a = b;
    b =temp;
}
int main(){
    int a=10,b=20;
    cout<<"Swapping by pointer reference(call by ref)\n";
    cout<<"value of a and b before swapping: \n"<<a<<endl<<b<<endl;
    swap_ptr(&a,&b);
    cout<<"value of a and b after swapping: \n"<<a<<endl<<b<<endl;
    
    cout<<"Swapping by reference variable(call by value):\n";
    cout<<"value of a and b before swapping: \n"<<a<<endl<<b<<endl;
    swap_refVar(a,b);
    cout<<"value of a and b after swapping: \n"<<a<<endl<<b<<endl;
    // swap_refVar(a,b) = 100;
    // cout<<"value of a and b after swapping: \n"<<a<<endl<<b<<endl;
    return 0;
}
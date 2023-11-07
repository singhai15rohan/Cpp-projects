#include<iostream>
using namespace std;
typedef struct Employee
{
    int id;
    float salary;
    string name;
}code;

//better memory management and only 1 item can be used
 union money
 {
    /* data */
    int rice;
    float pounds;
    char car;
 };
 

int main(){
    cout<<"Using enum: "<<endl;
    enum name1 {rohan,jain,singhai};
    cout<<rohan<<endl;
    cout<<jain<<endl;
    cout<<singhai<<endl;
   
    cout<<"using union"<<endl;
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.rice<<endl;
    cout<<"Giving garbage value: "<<endl;
    cout<<m1.car<<endl;
   
    cout<<"using structure: "<<endl;
    code Rohan;
    code Sneha;
    Rohan.id = 2200530;
    Rohan.salary=123456;
    Sneha.id=2200781;
    Sneha.salary=123456;
    //Rohan.name = "Rohan jain"<<endl;
    cout<<"id and salary : "<<endl<<Rohan.id<<endl<<Rohan.salary<<endl;
    cout<<"id and salary : "<<endl<<Sneha.id<<endl<<Sneha.salary<<endl;
    return 0;
}
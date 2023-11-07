#include<iostream>
using namespace std;

class college
{
    protected:
    int id;
    public:
    void get_id(int i)
    {
        id = i;
    }
};
class student:public college
{
    protected:
    string name;
    public:
    void get_name(string n)
    {
        name = n;
    }
    void display()
    {
        cout<<"Id of student: "<<id<<endl;
        cout<<"Name of student: "<<name<<endl;
    }
};
int main()
{
    string name1;
    int id1;
    cout<<"Multilevel using protected class: "<<endl;
    student obj;
    cout<<"Enter name: "<<endl;
    cin>>name1;
    cout<<"Enter id: "<<endl;
    cin>>id1;
    obj.get_id(id1);
    obj.get_name(name1);
    obj.display();
}
#include <iostream>
using namespace std;

class Human
{
public:
    string name;
    void getname()
    {
        cout << "enter name: ";
        cin >> name;
    }
};
class student : public Human
{
public:
    int id;
    void getid()
    {
        cout << "Enter id: ";
        cin >> id;
    }
    void display()
    {
        cout << name << endl
             << id << endl;
    }
};
class marks : public Human
{
public:
    float marks;
    void getmarks()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }
    void display()
    {
        cout << marks << endl;
    }
};
int main()
{
    marks obj2;
    student obj1;
    obj1.getname();
    obj1.getid();
    obj2.getmarks();
    obj1.display();
    obj2.display();
    return 0;
}
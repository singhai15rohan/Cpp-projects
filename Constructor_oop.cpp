#include <iostream>
using namespace std;
class cons
{
public:
    cons()
    {
        cout << "Default Constructor is called" << endl;
    }
    ~cons(){
        cout << "destructor is called"<<endl;
        }
    // parameterized
    string name,
        roll;
    char grade;
    cons(string n, string r, char g)
    {
        name = n;
        roll = r;
        grade = g;
    }
    void display()
    {
        cout << "Parameterized constructor is called" << endl;
        cout << "Name is : " << name << endl;
        cout << "Roll no  is : " << roll << endl;
        cout << "grade is : " << grade << endl;
    }
};
class sum
{
public:
    int num1, num2;
    sum(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    sum(sum &obj_name)
    {
        num1 = obj_name.num1;
        num2 = obj_name.num2;
    }
    void display_sum()
    {
        cout << "Sum is : " << num1 + num2 << endl;
    }
};
int main()
{
    cons c1;
    cons c2 = cons("Rohan", "EN22CS301817", 'A');
    c2.display();
    sum add(10, 15);
    sum add2 = add;
    add2.display_sum();
}
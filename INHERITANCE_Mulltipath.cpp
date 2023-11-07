#include<iostream>
using namespace std;

class Human
{
    public:
    void human()
    {
        cout<<"I am a Human"<<endl;
    }
};
// virtual used to remove ambiguous error (two classes inheriting the same class i.e. Rohan inherits student and prgrmr but they have to be virtual)
class Student : public virtual Human{};
class Programmer : public virtual Human{};
class Rohan : public Student , public Programmer
{};
int main(){
    Rohan obj;
    obj.human();
    return 0;
}
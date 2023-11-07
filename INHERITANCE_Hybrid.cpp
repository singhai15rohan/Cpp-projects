#include<iostream>
using namespace std;

class animal
{
    public:
    string ani = "This is animal class\n";
};
class mammel:public animal
{
    public:
    string mam = "this is mammel class\n";
};
class herbivore
{
    public:
    string her = "This is herbivorous class\n";
};
class cow:public herbivore,public mammel
{
    public:
    string c = "Cow is a herbivore mammel \n";
    void display()
    {
        cout<<ani<<mam<<her<<c;
    }
};

int main()
{
    cow obj;
    obj.display();
}
    
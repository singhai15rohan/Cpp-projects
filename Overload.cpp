//r oprtor overload
#include<iostream>
using namespace std;
class Overload
{
    private:
    int num;
    public:
    Overload():num(10){}
    void operator ++()
    {
        num = num+500;
    }
    void print()
    {
        cout<<"Value of num: "<<num;
    }
};
int main()
{
    Overload obj;
    ++ obj;
    obj.print();
}
/*
#include<iostream>
using namespace std;
class Overload
{
    private:
    int num;
    public:
    Overload():num(10){}
    void operator *()
    {
        num = num/5;
    }
    void print()
    {
        cout<<"Value of num: "<<num;
    }
};
int main()
{
    Overload obj;
    *obj;
    obj.print();
}
*/
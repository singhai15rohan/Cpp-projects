// #include<iostream>
// using namespace std;
// class Dean
// {
//     public:
//     string Dname;
// };
// class hod:public Dean{
//     public:
//     string Hname;
// };
// class CC:public hod{
//     public:
//     string ccname;
//     void input()
//     {
//         cout<<"Enter name of dean,hod and cc: "<<endl;
//         cin>>Dname>>Hname>>ccname;
//     }
//     void display()
//     {
//         cout<<Dname<<endl;
//         cout<<Hname<<endl;
//         cout<<ccname<<endl;
//     }
// };
// int main(){
//     CC obj;
//     obj.input();
//     obj.display();
//     return 0;
// }
//rohan multiple inheritance
#include<iostream>
using namespace std;

class grandparent
{
    public:
    string grandparent_name;
    
};
class father:public grandparent
{
    public:
    string father_name;
    
};
class me:public father
{
    public:
    string my_name;
    void input1()
    {
        cout<<"Enter grandparent_name : "<<endl;
        cin>>grandparent_name;
         cout<<"Enter father_name : "<<endl;
        cin>>father_name;
        cout<<"Enter my_name : "<<endl;
        cin>>my_name;

    }
    /*void input2()
    {
        cout<<"Enter father_name : "<<endl;
        cin>>father_name;
       
    }
    //void input3()
    {
        cout<<"Enter my_name : "<<endl;
        cin>>my_name;
    }
    */
    void display()
    {
        cout<<"All three people name: "<<grandparent_name<<endl<<father_name<<endl<<my_name<<endl;
    }
    
};
int main()
{
    cout<<"Multiple inheritance: "<<endl;
    me details;
    details.input1();
   // details.input2();
    //details.input3();
    details.display();
}
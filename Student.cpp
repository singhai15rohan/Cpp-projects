#include<iostream>
using namespace std;
class StudentInfo{
    int num;
    string name[10],roll[10];
    public:
    void input()
    {
        cout<<"Enter the number of student : ";
        cin>>num;
        for(int i=0;i<num;i++)
        {
            cout<<"Enter name of student:  "<<endl;
            cin>>name[i];
        }
        for(int i=0;i<num;i++)
        {
            cout<<"Enter roll number of student:  "<<endl;
            cin>>roll[i];
        }
    }
    void display()
    {
        cout<<"Details of students: \n";
        cout<<"\tName\tRoll number \n";
        for(int i=0;i<num;i++)
        {
            cout<<"\t"<<name[i];
            cout<<"\t"<<roll[i];
            cout<<"\n";
        }
    }
    

};
int main()
{
    StudentInfo s1;
    s1.input();
    s1.display();
}
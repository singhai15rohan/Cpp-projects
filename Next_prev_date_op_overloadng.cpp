#include <iostream>
using namespace std;

class Overloading
{
private:
    int day, month, year;

public:
    void input()
    {
        cout << "Enter day, month, year: ";
        cin >> day >> month >> year;
    }

    void display()
    {
        cout << "The date is: " << day << "/" << month << "/" << year << endl;
    }

    void operator++()
    {
        //  if (day <= 32 || month <= 13)
        // {
        //     cout << "Invalid date entered" << endl;
        // }
        cout << "Next date: " << endl;
        if(day == 31 && month == 12)
        {
            day = 1;
            month = 1;
            year += 1;
            cout<<"Happy New Year!!!!"<<endl;
        }       
        else if (month == 12)
        {
            month = 1;
            year += 1;
        }
        else if (day == 31)
        {
            day == 1;
        }
        
        else
        {
            day += 1;
        }
        cout << "The date is: " << day << "/" << month << "/" << year << endl;
    }
    void operator--()
    {
        // if (day <= 32 || month <= 13)
        // {
        //     cout << "Invalid date entered" << endl;
        // }
        cout << "Previous date: " << endl;
        if(day == 1 && month == 1)
        {
            day = 31;
            month = 12;
            year -= 1;
        }
        else  if (month == 1)
        {
            month = 12;
            year -= 1;
        }
        else if (day == 1)
        {
            day = 31;
        }
        else
        {
            day -= 1;
        }
        cout << "The date is: " << day << "/" << month << "/" << year << endl;
    }
};

int main()
{
    Overloading obj;
    int choice;
   // string operator_name;
   obj.input();
    cout<<"1. Next date \t 2. Previous date \t 3.Both"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
    ++obj;
        break;
    case 2:
    --obj;
    break;
    case 3:
    ++obj;
    --obj;
    break;
    default:
    cout<<"Invalid date"<<endl;
        break;
    }
    //obj.display();
    
    

    return 0;
}

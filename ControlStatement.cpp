#include <iostream>
using namespace std;
int main()
{
    //****Selection control structure : if else ladder******///////
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    int time_remain = 18 - age;
    if (age >= 18)
    {
        cout << "You can vote" << endl;
    }
    else if (age < 0)
    {   
        cout << "Invalid input" << endl;
    }
    else
    {

        cout << "You can't vote" << endl
             << "You have to wait: " << time_remain << " years";
    }
    //****Selection control structure : switch******///////
    switch (age)
    {
    case 18:
        cout << "Adult" << endl;
        break;

    default:
        break;
    }
    return 0;
}

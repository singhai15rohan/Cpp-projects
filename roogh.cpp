#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number";
    cin >> n;
    if (n % 2 == 0 && n % 3 == 0 && n % 5 == 0)
    {
        cout << "div by 2,3,5" << endl;
    }
    else if (n % 2 == 0 && n % 3 == 0)
    {
        cout << "div by 2,3" << endl;
    }
    else if (n % 2 == 0)
    {
        cout << "div by 2" << endl;
    }
    else if (n % 3 == 0)
    {
        cout << "div by 3" << endl;
    }
    return 0;
}
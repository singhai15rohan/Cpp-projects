
#include <iostream>
using namespace std;
int main()
{
    int i;
    int a[10], item, size;
    
    cout << "Enter size of array: ";
    cin >> size;
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the item to search for: ";
    cin >> item;
    // while (i <= size && a[i] == item)
    for(i=0;i<size ;i++)
    {
        if (a[i] == item)
        {
            i = item;
            break;
            
     }   
    }
     cout << item + "found at " + i;
}

#include <iostream>
using namespace std;
int main()
{
    int size, i;
    cout << "Enter size of array: " << endl;
    cin >> size;
    int array[size];
    cout << "Enter array elements in integer type: " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "Entered array elements are: " << endl;
    for (i = 0; i < size; i++)
    {
        cout << "Array at index " << i << " is " << array[i] << endl;
    }
    cout << "Now reversing the entered elements: " << endl;
    for (i = size - 1; i >= 0; i--)
    {
        cout << "Array(reversed) at index  " << i << " is " << array[i] << endl;
    }
    int sum = 0;
    cout << "Addition of elements of array : ";
    for (i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }
    cout << sum << endl;
    int new_value;
    cout << "Enter new element to add at last place: ";
    cin >> new_value;
    size += 1;
    array[size - 1] = new_value;
    for (i = 0; i < size; i++)
    {
        cout << "Array at index " << i << " is " << array[i] << endl;
    }
    cout << "Enter element to enter at first place: " << endl;
    cin >> new_value;
    size += 1;
    for (i = size - 1; i >= 0; i--)
    {
        array[i + 1] = array[i];
    }
    array[0] = new_value;
    for (i = 0; i < size; i++)
    {
        cout << "Array at index " << i << " is " << array[i] << endl;
    }
    int pos;
    cout << "Enter position to insert element: " << endl;
    cin >> pos;
    cout << "Insert new element: " << endl;
    cin >> new_value;
    size += 1;
    for (i = size - 1; i >= pos - 1; i--)
    {
        array[i + 1] = array[i];
    }
    array[pos - 1] = new_value;
    for (i = 0; i < size; i++)
    {
        cout << "Array at index " << i << " is " << array[i] << endl;
    }
    cout << "Deletion of last element: "<<endl;
    size -= 1;
    for(i=0;i<size;i++)
    {
        cout<<"Array at index "<<i<<" is "<<array[i]<<endl;
    } 
    return 0;
}
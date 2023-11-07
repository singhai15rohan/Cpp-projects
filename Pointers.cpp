#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int *pointer = &num;
    // Address
    cout << "Address of number is : " << pointer << endl;
    //Value (*) dereference operator
    cout << "Value of number is : " << *pointer<<endl;
    // Pointer to pointer 
    int** c  = &pointer;
    cout<<"Address of c : "<<c<<endl;
    cout<<"Address of c : "<<&pointer<<endl;
    cout<<"Value of c : "<<**c<<endl;

    ///*****pointer arithmetic formula : address(new) = address(current) + i*sizeof(datatype    )

    int arr[10] = {12,34,56,78,90};
    int *p;
    p = arr;
    cout<<"Address of array elemets: "<<endl;
    cout<<"Address at arr[0] : "<<arr<<endl;
    cout<<"Address at arr[1] : "<<arr+1<<endl;
    cout<<"Address at arr[2] : "<<arr+2<<endl;
    cout<<"Address at arr[3] : "<<arr+3<<endl;
    cout<<"Address at arr[4] : "<<arr+4<<endl;
    cout<<"values of array elements: "<<endl;
    cout<<"Value at arr[0] : "<<*(arr)<<endl;
    cout<<"Value at arr[1] : "<<*(arr+1)<<endl;
    cout<<"Value at arr[2] : "<<*(arr+2)<<endl;
    cout<<"Value at arr[3] : "<<*(arr+3)<<endl;
    cout<<"Value at arr[4] : "<<*(arr+4)<<endl;
    return 0;
}

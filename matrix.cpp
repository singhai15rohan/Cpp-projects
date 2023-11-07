#include<iostream>
using namespace std;
int main()
{
    int row,col,sum;
    cout<<"Enter rows and coloumn of matrix A: ";
    cin>>row>>col;
    int A[row][col];
    cout<<"Enter matrix elements: "<<endl;
    for(int i =0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>A[i][j];
        }
    }
    for(int i =0;i<row;i++)
    {
        cout<<endl;
        for(int j=0;j<col;j++)
        {
            cout<<A[i][j]<<" ";
        }
    }
    cout<<endl;
    cout<<"Enter rows and coloumn of matrix B: ";
    cin>>row>>col;
    int B[row][col];
    cout<<"Enter matrix elements: "<<endl;
    for(int i =0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>B[i][j];
        }
    }
    for(int i =0;i<row;i++)
    {
        cout<<endl;
        for(int j=0;j<col;j++)
        {
            cout<<B[i][j]<<" ";
        }
    }
    cout<<endl;
    cout<<"Addition of matrix is: ";
    for(int i=0;i<row;i++)
    {
        cout<<endl;
        for(int j=0;j<col;j++)
        {
         cout << A[i][j]+B[i][j]<<" ";
        }
    }
    
}
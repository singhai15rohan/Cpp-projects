#include<iostream>
using namespace std;
int main()
// {
//     int n,num=0;
//     cout<<"Enter rows: ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }
// {
//     int n=4;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<"\n";
//     }
// }
// {
//     int n;
//     cin>>n;
//     for(int i=n;i>=1;i--)
//     {
//         for(int j=i;j>=1;j--)
//         {
//             cout<<j<<" ";
//         }
//         cout<<"\n";
//     }
// }
{
    {
    // Number of spaces
    int n =5;
    int i, j, k = n;
 
    // Outer loop to handle number of rows
    // n in this case
    for (i = 1; i <= n; i++) {
 
        // Inner loop for columns
        for (j = 1; j <= n; j++) {
 
            // Condition to print star pattern
            if (j >= k)
                cout << "* ";
            else
                cout << " ";
        }
        k--;
        cout << "\n";
    }
}
}
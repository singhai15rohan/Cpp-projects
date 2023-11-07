#include<iostream>
using namespace std;

//compiler replaces the function calling location with the definition of the inline function at compile time.

// jab function ke andar bhot kam code ho tb inline function use hoga 
// not use static in inline (not recommended)
///dont use in recursions
inline int func(int a ,int b)
{
    //static int c = 0; this only runs one time
    // c += 1; then after running the value keeps increasing c= 2,c=3 annd so on
    return a*b;
}
int main(){
    int x,y;
    cout<<"enter two numbers: "<<endl;
    cin>>x>>y;
    cout<<func(x,y);
    return 0;
}
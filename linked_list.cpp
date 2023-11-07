#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node *address;
}Link;
Link *first,*second;
int main(){
    int num;
    first=(Link*)malloc(sizeof(Link));
    cout<<"Enter first node: ";
    cin>>num;
    first->data = num;
    first->address=NULL;

    second=(Link*)malloc(sizeof(Link));
    cout<<"Enter second node: ";
    cin>>num;
    second->data = num;
    second->address=NULL;

    cout<<"Value of 1 and 2: "<<first->data<<endl<<second->data;
    return 0;
}
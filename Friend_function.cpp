//r frnd func
// friend function code
#include<iostream>
using namespace std;
class data
{
    private:
    int id = 12345;
    
    public:
    data():id(0){}
    friend void func(data);
};
 void func(data num)
 {
   num.id = 2200530;
   cout<<num.id;
    //return num.id; 
 }
int main()
{
    data num;
    func(num);
}


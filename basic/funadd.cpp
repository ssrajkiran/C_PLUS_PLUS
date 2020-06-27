
#include <iostream>
 
using namespace std;
 
class Addition
{
    int a,b;
public:
   void input()
   {
       cout<<"Enter two number";
       cin>>a>>b;
   }
   void add()
   {
       cout<<"Addition of numbers:\n";
       a+b;
   }
   void output()
   {
       cout<<"The sum is:"<<a+b;
   }
};

int main()
{
    Addition a;
    a.input();
    a.add();
    a.output();
    return 0;
}

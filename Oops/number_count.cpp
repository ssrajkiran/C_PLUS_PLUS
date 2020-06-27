#include <iostream>

using namespace std;
 
class loop
{
    int a,b;
public:
  void input()
  {
      cout<<"Enter range:";
      cin>>a>>b;
  }
  void process()
   {
       if(a<=b)
       {
          cout<<"The number is fornt:"<<endl;
           for (a;a<=b;a++)
             {
                  cout<<a<<endl;
             }
       }
       else
       {
           cout<<"The number will be back:"<<endl;
            for(a;a>=b;a--)
            {
                cout<<a<<endl;
            }
       }
      
   }
}; 
int main(){

    cout<<"Hello World"<<endl;
    loop a;
    a.input();
    a.process();
    return 0; }


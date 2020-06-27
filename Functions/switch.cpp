#include<iostream>
using namespace std;

int function()
{
    int choice;
    
    cout<<"Your choices:1.Add 2.Subtract 3.Multiplication 4.Division"<<endl;
    cout<<"Enter the choice:"<<endl;
    cin>>choice;
    return choice;


}
int main()
{
    int choice,ans,a,b;
     cout<<"Enter the 2 numbers:"<<endl;
    cin>>a>>b;

    choice=function();
    
    switch(choice)
    {
        case 1:
        
              cout<<"Your Addition answer is:"<<a+b<<endl;
            break;
        
        case 2:
        
              cout<<"Your Subtraction answer is:"<<a-b<<endl;    
            break;
        
        case 3:
        
            cout<<"Your multiplication answer is:"<<a*b<<endl;
            break;
        
        case 4:
        
              cout<<"Your Division answer is:"<<a/b<<endl;
            break;
        
    }

    
}
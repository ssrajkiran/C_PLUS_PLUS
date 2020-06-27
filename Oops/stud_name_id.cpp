#include<iostream>
using namespace std;

class student
{
    public:
        string name;
        int id;
        int Total_mark;

        void ob1();
        
};
void student:: ob1()
{
    
        cout<<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter ID"<<endl;
        cin>>id;
        cout<<"Enter Total mark"<<endl;
        cin>>Total_mark;
    
        cout<<"Your name is:"<<name<<endl;
        cout<<"Your Id is:"<<id<<endl;
        cout<<"Your mark is:"<<Total_mark<<endl;
    
        
}
int main()
{
    
    student st1;
    st1.ob1();
    
        
    return 0;
}
#include<iostream>
using namespace std;

void function(int rollno,int age,string name)
{
    cout<<"Rollno:"<<rollno<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Name:"<<name<<endl;
}
void fun(int rollno)
{
    cout<<rollno;
}
int main()
{  
        function(938483,20,"Kiran");
        fun(30024);
    return 0;
}
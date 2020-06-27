#include<iostream>
using namespace std;

int main()
{
    int a,b,temp;

    cout<<"Swaping two number"<<endl;
    cout<<"Enter two number:"<<endl;
    cin>>a>>b;

    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping numbers:"<<endl;
    cout<<a<<b;
}
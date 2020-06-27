#include<iostream>
#include<string>
using namespace std;
int main()
{
    int length;
    string name={"Hello"};
    length=name.length();
    cout<<"Length of the string is :"<<length<<endl;
    for(int i=length;i>=0;--i)
    {
        cout<<name[i]<<endl;
    }
    return 0;
}
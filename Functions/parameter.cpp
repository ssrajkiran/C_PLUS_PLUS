#include<iostream>
using namespace std;
void function(char name[10]){
    cout<<"Hi"<<name<<endl;
}
int main()
{
    char name[10];
    cout<<"Enter your name"<<endl;
    cin>>name;
    function(name);
}
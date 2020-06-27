#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name="hi";
    string &hello=name; //reference
    cout<<"reference"<<hello<<endl;
    cout<<"address"<<&name<<endl;

    string*ptr =&hello;
    cout<<"pointer"<<ptr;
}

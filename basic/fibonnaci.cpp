#include<iostream>
using namespace std;

int main()
{
    int s=0,s1=1,sum=0,value,n=100;
    value=s+s1;
    cout<<"Starting value:"<<value<<endl;

    while(value<=n){
        cout<<value<<endl;
        s=s1;
        s1=value;
        value=s+s1;
    }
    return 0;
}
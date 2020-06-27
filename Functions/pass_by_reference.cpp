#include<iostream>
using namespace std;
void swap(int &x,int &y){
    int a=x;
    x=y;
    y=a;
}
int main()
{
    int x=10,y=20;
    cout<<"Before swap"<<x<<y<<endl;
    swap(x,y);
    cout<<"after swap"<<x<<y<<endl;
    return 0;
}
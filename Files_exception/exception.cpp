#include<iostream>
using namespace std;

int main()
{
    try
    {
        int age;
        cout<<"Enter your age:"<<endl;
        cin>>age;

        if(age<=18)
        {
            cout<<"You are not eligible."<<endl;
        }
        else
        {
            throw (age);
        
    }
    catch (int myage)
    {
        cout<<"You are eligible:"<<myage<<endl<<"Access granted";
    }
    return 0;
}
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string username,line;
    int id,age;

    cout<<"Enter your name:";
    cin>>username;

    cout<<"Enter your id:";
    cin>>id;

    cout<<"Enter your age:";
    cin>>age;

    ofstream myfile("storage.txt");

    myfile<<"Your name is:"<<username<<endl;
    myfile<<"Your age is:"<<age<<endl;
    myfile<<"Your id is:"<<id<<endl;

    myfile.close();

    ifstream mynewfile("storage.txt");

    while(getline (mynewfile,line))
    {
        cout<<line<<endl;
    }
    
}
#include<iostream>
using namespace std;

class Student
{
    private:
        char name[100];   
    public:
        long int id;

    void setname()
    {
        cout<<"Enter your name:";
        cin.get(name,100);
    }
    void getname()
    {
        
        cout<<"Your name is :"<<name<<endl;
    }


};
int main()
{
    Student ob1;
    ob1.setname();
    cout<<"Enter your id:"<<endl;
    cin>>ob1.id;

    ob1.getname();
    cout<<"Your id is:"<<ob1.id<<endl;
    return 0;
}
#include<iostream>
using namespace std;

class Ten
{
    public:
        string name;
        int id;
        void fun(int x)
        {g

            cout<<"Enter your name of (Without space):";
            cin>>name;
           cout<<"Enter your id(Ten)";
            cin>>id;

            cout<<"Your name is :"<<name<<endl;
            cout<<"Your id is :"<<id<<endl;

            if(x>=35)
            {
                cout<<"Pass"<<endl;
            }
            else
            {
                cout<<"Fail"<<endl;
            }
        }
};
class Twelth
{
    public:
        string name;
        int id;
        void fun1(int x)
        {

            cout<<"Enter your name of (Without space):";
            cin>>name;

           cout<<"Enter your id(Twelth)";
            cin>>id;

            cout<<"Your name is :"<<name<<endl;
           cout<<"Your id is :"<<id<<endl;

            if(x>=35)
            {
                cout<<"Pass"<<endl;
            }
            else
            {
                cout<<"Fail"<<endl;
            }
        }
};      
class Class :public Ten,public Twelth{

};

int main()
{
    Class std1;

    int x,mark;

    cout<<"Entegr your class:"<<endl;
    cin>>x;
    cout<<"Enter your mark:"<<endl;
    cin>>mark;

    if(x==10)
    {
        std1.fun(mark);
    }
    else
    {
        std1.fun1(mark);
    }
    return 0;
}
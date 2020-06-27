#include<iostream>
using namespace std;

class ob1
{
    public:
    ob1(){
        cout<<"Hello"<<endl;
    }
    void hi();
};

void ob1 ::hi()
{
    cout<<"HI"<<endl;
}
int main()
{
    ob1 hello;
    hello.hi();
    return 0;
}
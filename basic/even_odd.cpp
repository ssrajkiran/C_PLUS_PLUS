#include<iostream>
using namespace std;

int main()
{
    int number;

    cout<<"Enter the number:";
    cin>>number;
    if(number%2==0)
    {
        cout<<"The number you entered is:"<<number<<"is even"<<endl;
      
    }
    else
    {
          cout<<"The number you entered "<<number<<"is odd"<<endl;
    }
}

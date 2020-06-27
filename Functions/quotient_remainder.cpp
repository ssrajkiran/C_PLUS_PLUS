#include<iostream>
using namespace std;
int quotient_remainder(int x,int y)
{
    int q,r;
    q=x/y;
    r=x%y;
    cout<<q<<endl;
    cout<<r<<endl;

        
}
int main()
{
    int quotient,remainder;

    cout<<"Enter the number of numerator:"<<endl;
    cin>>quotient;
    cout<<"Enter the number of denominator:"<<endl;
    cin>>remainder;
    cout<<"Result:"<<endl;
    quotient_remainder(quotient,remainder);

} 
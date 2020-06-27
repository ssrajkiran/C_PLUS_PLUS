#include<iostream>

using namespace std;
    
int main(){ 

    int n, num, digit, rev = 0;

    cout<<"Enter the number:"<<endl;
    cin>>num;

    n=num;
    while(num!=0)
    {
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }
    cout<<rev<<endl;

    if(n==rev)
    {
        cout<<"Palindrome"<<endl;
        
    }
    else
    {
        cout<<"Not a palindrom"<<endl;
    }
    
    return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int r=5,b=5;
    for(int i=0;i<=r;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
//reverse//
    for(int k=b;k>=1;--k)
    {
        for(int l=1;l<=k;l++)
        {
            cout<<"*";

        }
        cout<<endl;
    }

    

    return 0;
    
}
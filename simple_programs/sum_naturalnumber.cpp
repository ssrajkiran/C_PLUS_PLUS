#include<iostream>
using namespace std;

int main (){

    int i,sum =0,n;

    cout << "Enter upto sum needed :";
    cin >> n;

    for(i=1;i<=n;i++){

        sum+=i;
    }
    cout << "Sum of Natural number is " << sum <<endl;
}
#include<iostream>
using namespace std;
int main(){

    int a=0,b=1,tmp,sum=0,n,total_sum=0;
    cout <<"Enter the number:";
    cin >> n;
    cout << a <<" "<<b<< " ";
    while(n!=0){
        sum = a+b;
        cout << sum <<" ";
        total_sum = total_sum + sum;
        a = b;
        b= sum;
        n--;
    }
    cout <<endl;
    cout << total_sum;
}
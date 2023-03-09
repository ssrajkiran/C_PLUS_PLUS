#include<iostream>
using namespace std;
int main(){
    int a,b,c,sum=0;
    cout <<"Enter the starting number:";
    cin >> a;
    cout <<"Enter the ending number:";
    cin >> b;
    cout <<"Enter the divisible value";
    cin >> c;
    if( a > b){
        int tmp;
        tmp =a;
        a=b;
        b=tmp;
    }
    while(a <= b){
        if(a %c ==0){
            sum++;
        }
        a++;
    }
    cout << sum;
}
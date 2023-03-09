#include<iostream>
using namespace std;
int main(){
    int a,b,c;
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
    for(int i=a;i<=b;i++){
        if(i%c == 0){
            cout << i << " ";
        }
    }
}
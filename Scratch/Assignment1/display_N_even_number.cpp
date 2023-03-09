#include<iostream>
using namespace std;
int main(){
    int a,b,c,count = 0 ;
    cout <<"Enter the starting number:";
    cin >> a;
    cout <<"Enter the upto count number:";
    cin >> b;
    cout <<"Enter the divisible number:";
    cin >> c;
    while(count <b){
        if((a%c == 0) && (a%2 ==0)){    
            cout << a <<" ";
            count++;
        }
        a++;
    }
    
}
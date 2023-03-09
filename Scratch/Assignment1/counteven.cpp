#include<iostream>
using namespace std;
int main(){
    int a =1 ,b,c,sum=0;
    cout <<"Enter the ending number:";
    cin >> b;
    cout <<"Enter the divisible value";
    cin >> c;

    while(a <= b){
        if((a %c==0) && (a%2 ==0)){
            sum++;
        }
        a++;
    }
    cout << sum;
}
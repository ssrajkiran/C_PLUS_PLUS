#include<iostream>
using namespace std;
int isprime(int i);
int main(){
    int number,count;
    cout <<"Enter the number";
    cin >> number;
    cout <<"Enter the count";
    cin >> count;
    for(int i=number;count>0;i++){
        if(isprime(i) == 1){
            cout << i <<" ";
            count --;
        }
    }
}
int isprime(int number){
    for(int i=2;i<=number/2;i++){
        if(number%i == 0){
            return 0;
        }
    }
    return 1;
}
#include<iostream>
using namespace std;
int main(){
    int number,result=0,rem;
    cout <<"Enter the number";
    cin >> number;
    while(number>0){
        rem = number%10;
        result = result + rem;
        number = number/10;
    }
    cout << result;
} 
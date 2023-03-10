#include<iostream>
using namespace std;
int main(){
    int number,rem,result=0;
    cout << "Enter the number:";
    cin >> number;
    while(number > 0){
        rem = number%10;
        result = result*10 + rem;
        number = number/10;
    }
    cout << result;
}
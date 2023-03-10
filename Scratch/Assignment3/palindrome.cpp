#include<iostream>
using namespace std;
int main(){

    int number,tmp,result,rem;
    cout << "Enter the number";
    cin >> number;
    tmp = number;
    while(number > 0){
        rem = number % 10;
        result = result * 10 + rem;
        number = number /10;
    }
    if(result == tmp){
        cout <<"Palindrome";
    }else{
        cout << "Not a palindrome";
    }
}
#include<iostream>
using namespace std;
void fact(int num);
int main(){
    int number;
    cout <<"Enter the number";
    cin >> number;
    fact(number);
}
void fact(int num){
    int result=1;
    while(num!=0){
        result = result * num;
        num--;
    }
    cout << result;
}
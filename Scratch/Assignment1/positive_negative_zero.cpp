#include<iostream>
using namespace std;
int main(){
    int a;
    cout <<"Enter the number:";
    cin >> a;
    if(a == 0 ){
        cout << "Zero";
    }else if(a > 0){
        cout << "Positive";
    }else{
        cout <<"Negative";
    }
}
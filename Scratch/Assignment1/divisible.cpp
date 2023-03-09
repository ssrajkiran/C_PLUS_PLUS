#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout <<"Enter the starting number";
    cin >> a;
    cout <<"Enter the ending number";
    cin >> b;
    for(int i=a;i<=b;i++){
        if(i%10 ==0){
            cout << i <<" ";
        }
    }
}
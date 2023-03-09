#include<iostream>
using namespace std;
int main(){

    int n,result=1;
    cout <<"Enter the no of times:";
    cin >> n;
    for(int i=n;i>0;i--){
        result = result * i;
    }
    cout << result;
}
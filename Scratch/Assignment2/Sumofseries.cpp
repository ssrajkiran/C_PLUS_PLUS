#include<iostream>
using namespace std;
int main(){
    int i=1,end,sum=0;
    cout <<"Enter the ending number:";
    cin >> end;
    while(i <=end){
        sum = sum +i;
        i++;
    }
    cout << sum;
}
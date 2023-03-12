#include<iostream>
using namespace std;
int main(){
    int count;
    cout <<"Enter the count";
    cin >> count;
    int arr[count],sum = 0;
    for(int i=0;i<count;i++){
        cin >> arr[i];
    }
    for(int i=0;i<count;i++){
        sum = sum + arr[i];
    }
    cout << sum;
}
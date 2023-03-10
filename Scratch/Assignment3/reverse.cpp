#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the no of count:";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=n-1;i>=0;i--){
        cout << arr[i]<<" ";
    }
}
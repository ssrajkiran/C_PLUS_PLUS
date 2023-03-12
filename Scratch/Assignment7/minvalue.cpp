#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int count;
    cout <<"Enter the count";
    cin >> count;
    int arr[count];
    for(int i=0;i<count;i++){
        cin >> arr[i];
    }
    sort(arr,arr+count);
    // for(int i : arr){
    //     cout << i;
    // }
    cout << arr[0];
}
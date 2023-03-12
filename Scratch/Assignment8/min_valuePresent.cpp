#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int count,res =0;
    cout <<"Enter the count";
    cin >> count;
    int arr[count];
    for(int i=0;i<count;i++){
        cin >> arr[i];
    }
    sort(arr,arr+count);
    for(int i=0;i<count;i++){
        if(arr[i] == arr[i+1]){
            res = res+1;
        }
    }
    cout << arr[0];
    cout << res;

}
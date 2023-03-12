#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int count,x,sum_of_first = 0,sum_of_last =0;
    cout <<"Enter the count";
    cin >> count;
    cout << "Enter the x number want to add";
    cin >> x;
    int arr[count];
    for(int i=0;i<count;i++){
        cin >> arr[i];
    }
    sort(arr,arr+count);

    for(int i=0;i<count;i++){
        if(i<4){
            sum_of_first = sum_of_first + arr[i];
        }else{
            sum_of_last = sum_of_last + arr[i];
        }
    }
    cout << sum_of_first <<" "<< sum_of_last;
}
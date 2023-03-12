#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int count,number;
    cout << "Enter the count";
    cin >> count;
    int arr[count];
    for(int i=0;i<count;i++){
        cin >> arr[i];
    }
    vector<int> res;
    cout <<"Enter the number";
    cin >> number;
    for(int i=0;i<count;i++){
        if(arr[i] < 0 || arr[i]%2 != 0){
            continue;
        }else{
            res.push_back(arr[i]);
        }
    }
    int sum =0,countres=0;
    sort(res.begin(),res.end());
    for(auto i=res.begin();i!=res.end();i++){
        if(sum < number){
              sum = sum + *i;
        countres = countres+1;
        
        }
    }
    cout << "sum is :" << sum+res[countres+1]<<endl;
    cout << "countres is :"<<countres;
}
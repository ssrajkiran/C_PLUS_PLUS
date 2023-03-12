#include<iostream>
using namespace std;
int main(){
    int count,res=0,search;
    cout <<"Enter the count";
    cin >> count;
    cout <<"Enter the search number";
    cin >> search;
    int arr[count];
    for(int i=0;i<count;i++){
        cin >> arr[i];
    }
    for(int i=0;i<count;i++){
        if(search == arr[i]){
            res++;
        }
    }
    cout << res;

}
#include<iostream>
using namespace std;
int main(){
    int count,number;
    cout <<"Enter the count";
    cin >> count;
    cout <<"Enter the number have to search";
    cin >> number;
    int arr[count];
    for(int i=0;i<count;i++){
        cin >> arr[i];
    }
    for(int i=count;i>=0;i--){
        if(number == arr[i]){
            cout << i;
            break;
        }
    }
}
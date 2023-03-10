#include<iostream>
using namespace std;
int main(){
    int n,z;
    cout <<"Enter the count of the numbers";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout <<"Enter the Z number:";
    cin >> z;
    for(int i=0;i<n;i++){
        cout << arr[i] <<" " << z - arr[i]<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int count,add;
    cout <<"Enter the count of the array";
    cin >> count;
    cout <<"Enter the number to be added";
    cin >> add;
    int arr[count];
    for(int i =0;i<count;i++){
        cin >> arr[i];
    }
    int sum =0;
    for(int i=0;i<count,add > 0;i++){
        if(arr[i] < 0){
            sum = sum + arr[i];
            add--;
        }
    }
    cout << sum;
}
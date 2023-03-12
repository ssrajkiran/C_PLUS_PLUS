#include<iostream>
using namespace std;
int main(){
    int count,index=0;
    cout <<"Enter the count";
    cin >> count;
    int arr[count];
    for(int i=0;i<count;i++){
        cin >> arr[i];
    }
    int max = arr[0];
    for(int i=1;i<count;i++){
        if(max < arr[i]){
            max = arr[i];
            index = i;
        }
    }
cout << " Maximum number is :" << max <<endl;
cout <<"Index is : "<< index;
}
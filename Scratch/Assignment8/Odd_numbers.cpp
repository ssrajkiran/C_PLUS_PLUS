#include<iostream>
using namespace std;
int main(){
    int count,flag=0;
    cout <<"Enter the count of the array";
    cin >> count;
    int arr[count];

    for(int i=0;i<count;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<count;i++){
        if(arr[i]%2 != 0 ){
          cout << arr[i]<<" ";
          flag = 1;
        }else{
            if(flag == 1){
            cout <<endl;
            }
        }
        
    }
}
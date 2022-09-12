#include<iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter the count of the array :";
    cin>> n;
     string tmp;

    string arr[n];
    cout <<"Enter the inputs of the array :";
    for(int i =0;i<=n;i++){
     getline(cin,arr[i]);
    }
  
     for(int i=0;i<(n-1);i++){
        for(int j=0;j<=(n-1)-i;j++){
            if(arr[j] > arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;

            }
        }
        
    }
    
    for(int i=0;i<=n;i++)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){

    int count;
    cout << "Enter the count";
    cin >> count;
    int arr[count];
    for(int i=0;i<count;i++){
        cin >> arr[i];
    }
    int max = arr[count-1];
    int index =0;
    for(int i=count-1;i>0;i--){
        if(max  < arr[i]){
            max = arr[i];
            index =i;
        }
    }
    cout << "Max number : "<< max<<endl;
    cout << "Index : "<< index;
}
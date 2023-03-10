#include<iostream>
using namespace std;
int main(){
    int count;
    cout <<"Enter the x number count";
    cin >> count;
   for(int i=1;count!=0;i++){
        if(i%2 !=0){
            cout << i <<" ";
            count--;
        }
   }
}
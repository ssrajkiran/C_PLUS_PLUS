#include<iostream>
using namespace std;
int main(){
   int number,flag=0;
   cout <<"Enter the number";
   cin >> number;
    if(number == 0 || number == 1){
        flag =1;
    }
    for(int i=2;i<=number/2;i++){
        if(number%i == 0){
            flag =1;
        }
    }
    if(flag == 0){
        cout <<"1";
    }else{
        cout << "0";
    }
}
#include<iostream>
using namespace std;
int main(){
    int n,number=1;
    cout <<"Enter the number";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << number;
            number = number+2;
        }
        if(i%2 != 0){
            number =2;
        }else{
            number =1;
        }
        cout << endl;
    }

}
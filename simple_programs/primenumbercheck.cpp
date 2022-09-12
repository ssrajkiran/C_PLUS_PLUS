#include<iostream>
using namespace std;
int main (){
    int n,m=0;
    int flag = 0;
    cout << "Enter the number :";
    cin >> n;

    m=n/2;

    
    

    for(int i=2;i<m;i++){

        if(i == 0 || i==1)
    continue;


        if(n%i ==0){
            cout << "not a prime";
        flag=1;
        }
        
    }
    if(flag==0){
        cout << "it a prime";
    }


    
}
#include<iostream>
using namespace std;

int main(){

    int start,end;

    cout << "Enter starting and ending numbers ";
    cin >> start >>end;

    for (int i =start;i<=end;i++){

        if(i%2 != 0){
            cout << i <<endl;
        }
        
    }
}
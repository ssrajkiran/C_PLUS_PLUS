#include<iostream>
using namespace std;
int main(){
    int number,i=1;
    cout << "Enter the number";
    cin >> number;
    while(i <= number){
        cout << "*" <<" ";
        i++;
    }
}
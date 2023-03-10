#include<iostream>
using namespace std;
int main(){
    int x,i=1;
    cout << "Enter the x number want to repeat";
    cin >> x;
    string txt = "hi";
    while(i <= x){
        cout << txt <<endl;
        i++;
    }
}
#include<iostream>
using namespace std;
int main(){
    string arr[9] = {"One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int number;
    cout << "Enter the number";
    cin >> number;
    if(number <= 9){
    cout << arr[number-1];
    }else{
        cout <<"Invalid number";
    }
}
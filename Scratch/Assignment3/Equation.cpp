#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout <<"Enter the X number: ";
    cin >> x;
    cout << "Enter the Y number";
    cin >> z;
    if(x < z){
        int tmp = x;
        x = z;
        z = tmp;
    }

    y = x - z;
    cout << x <<" "<<y<<" "<<z;
}
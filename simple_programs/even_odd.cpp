#include <iostream>
using namespace std;
int main(){

    int a;

    cout<<"Enter the number :";
    cin >> a;

    if(a %2 == 0 ){
        cout << "Number is even : " << a << endl;
    }else{
        cout << "Number is odd : " << a << endl;
    }
}
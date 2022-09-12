#include<iostream>
using namespace std;

int main (){

    int fact=1,n;
    cout << "Enter the number of fact :";
    cin >> n;

    for(int i =1 ; i<=n ;i++){
        fact = fact *i;
    }
    cout << "The factorial is :" << fact <<endl;
    return 0;

}
#include<iostream>
using namespace std;
int main(){
    int chocolates,children;
    cout <<"Enter the chocolates:";
    cin >> chocolates;
    cout << "Enter the children:";
    cin >> children;
    int result = chocolates % children;
    cout << result;
}
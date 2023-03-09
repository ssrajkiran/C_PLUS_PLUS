#include<iostream>
using namespace std;
int main(){
    int a,b,unit1,unit2;
    cout <<"Enter the number";
    cin >> a;
    cout <<"Enter the second number";
    cin >> b;
    if (a <=9 ){
        cout << "less than 9";
    }else{
        int rem1,rem2;
        rem1 = a /10;
        rem2 = b/10;
        unit1 = rem1%10;
        unit2 = rem2/10;
    }
    int sum = unit1 + unit2;
}
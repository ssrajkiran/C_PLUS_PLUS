#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout <<"Enter the number:";
    cin >> a;
    cout <<"Enter the number2";
    cin >> b;
    if(a > b){
        int tmp;
        tmp = a;
        a =b;
        b=tmp;
    }
    cout << a << " "<< b<<endl;
    while(a <= b){
        cout << a <<" "; 
        a++;
    }
   
}
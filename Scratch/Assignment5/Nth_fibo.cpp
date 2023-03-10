#include<iostream>
using namespace std;
int main(){
    int t1=0,t2=1,number,i=2,result;
    cout <<"Enter the number";
    cin >> number;
    while (i < number){
        result = t1+t2;
        t1 = t2;
        t2 = result;
        i++;
    }
   cout << result;
}
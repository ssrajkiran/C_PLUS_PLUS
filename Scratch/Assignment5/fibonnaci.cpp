#include<iostream>
using namespace std;
int main(){
    int N_value,i=2;
    cout <<"Enter the N_value";
    cin >> N_value;
    int t1 = 0 ,t2 =1,sum;
    cout << t1 << " "<<t2 << " ";
    while(i < N_value){
        sum = t1 + t2;
        cout << sum<< " ";
        t1 = t2;
        t2 = sum;
        i++;
    }

}
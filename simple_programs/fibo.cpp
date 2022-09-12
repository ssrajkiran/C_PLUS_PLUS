#include <iostream>
using namespace std;
int main(){

    int n,t =0,t1=1;

    cout << "Enter the range :";
    cin >> n;

    cout << "Fibonnaci series are " << t << " " <<t1 ;

    int nexterm = t+t1;

    while (nexterm <=n){
        cout << nexterm << " ";
        t =t1;
        t1 = nexterm;
        nexterm  = t+t1;
    } 
    return 0;

    

}
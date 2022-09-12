#include<iostream>
using namespace std;
int main (){

    int n,i,odd=0,even=0;

    cout << "Enter the table number :";
    cin >> n;
    cout << "Enter the times upto generate :";
    cin >> i;

    for(int j=0;j<=i;j++){

        if(j%2 ==0){
            cout << j << "*" << n << "=" << j*n <<endl;
             even +=1;
        }else{
            cout << j<<"*" << n << "= " << j*n<<endl;
            odd +=1;
        }
    }
    cout << "The total odd number are :" << odd<<endl;
    cout << "The total even numbers are :" <<even <<endl;
}
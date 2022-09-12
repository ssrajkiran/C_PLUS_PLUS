#include<iostream>
using namespace std;
int cou(int *a){   
   
    cout << *a+10;
    return 0;
}
int main(){
    string n;
    int count;
    cout << "Enter the number :";
    cin >> n;
    count = stoi(n);
    cou(&count);
    return 0;
}
#include<iostream>
#include<string.h>
using namespace std;
int main(){

    char a[25],b[25];

    cout <<"Enter the word :";
    // getline(cin,a); without space getting string
    cin.getline(a,25);

    cout <<"Enter the second word:";
    cin.getline(b,25);

    strcat(a,b);

    cout <<a<<endl;
    cout << b;
}
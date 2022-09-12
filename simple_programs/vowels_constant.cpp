#include<iostream>
using namespace std;

int main (){

    char c;
    bool islower , ishigher;
    cout << "Enter an  alphabet :";
    cin >> c;

    islower = (c == 'a' || c == 'e' || c == 'i' || c=='o' || c=='u');
    ishigher = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');

    if (!isalpha(c)){
        cout<< "Error "<<endl;
    }else if(islower || ishigher){
        cout << c << "is a vowel";
    }else
    cout << c << "is constant";

    return 0;
}
#include<iostream>
using namespace std;
int main(){
    string word;
    int n,i=1;
    cout <<"Enter the word:";
    getline(cin,word);
    cout <<"Enter the no of times repeat";
    cin >> n;
    while(i <= n){
        cout << word<<endl;
        i++;
    }
    
}
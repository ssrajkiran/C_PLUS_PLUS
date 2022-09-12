#include <iostream>
#include<vector>
#include<sstream>
#include<cstring>
using namespace std;
int main (){
    string s,t;

    getline(cin ,s);

    stringstream x(s);
    

    while (getline(x, t, ' ')){
        cout <<t<<endl;
    }


    vector<string> input;
    int n;
    string a;
    cout << "Enter the size of the string:";
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> a;
        input.push_back(a);
    }
    cout << "All string :";
    for(string i : input){
        cout <<i<<endl;
    }
    cout << input.size()<<endl;
    cout << sizeof(input)<<endl;

    cout << "-----------------------------" <<endl;

    string z[100];
    int c;
    cout <<"Enter the number :"<<endl;
    cin >> c;

    for(int j=0;j<c;j++){
        cin >> z[j];
    }
    
    cout << "reverse the word:"<<endl;

    for(int k=c;k>=0;k--){
        cout << z[k]<<endl;
    }

    cout <<"swap of string :"<<endl;

    string tmp;
    int l=0;
        tmp =z[0];
       z[0] =  z[c-l];
        z[c-l] = tmp;
    
    for(int g=0;g<=c;g++){
        cout << z[g]<<endl;
    }
    return 0;
}
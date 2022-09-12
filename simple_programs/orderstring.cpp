#include <iostream>
using namespace std;

int main (){

    string str[10],tmp;

    cout << "Enter the string :";
    for(int i=0;i<10;i++){
        getline(cin,str[i]);
    }

    cout << "The rearranged word in alphabets are:";

    for(int i=0;i<9;i++){
        for(int j=0;j<9-i;j++){
            if(str[j] > str[j+1]){
                tmp = str[j];
                str[j] = str[j+1];
                str[j+1] = tmp;

            }
        }
        
    }
    for(int i=0;i<10;i++){
        cout << str[i]<<endl;
    }

    return 0;
}
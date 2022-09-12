#include <iostream>
using namespace std;

int main (){

    string input;
    cout <<"Enter the string :";
    getline(cin,input);

    int length = input.length();
    int count =1;
    cout <<"Length of the string : " << length <<endl;

    for(int i=0;input[i]!='\0';i++){
        cout <<input [i]<<" "<<endl;
        if(input[i]==' ')
        count++;
    }
    cout << "Number of words in string :" <<count <<endl;
    return 0;

}
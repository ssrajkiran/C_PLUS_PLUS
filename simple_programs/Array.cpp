#include <iostream>
#include<string.h>
#define MAX 1000
using namespace std;
struct answer
{
    /* data */
    char key[10];
}s;

int main (){
    struct answer s;

    
    char a[50];
    cout <<"Enter the word:";
    cin.getline(a,50);
    strcpy (s.key,"hi");
    
    cout << s.key<<endl;
    int result = strcmp(s.key,a);

    if (result==0)
        cout << "string are equal";
    else
        cout << "string are not equal";
    return 0;
}

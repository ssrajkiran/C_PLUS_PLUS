#include <iostream>
using namespace std;

int main(){


    string a;
    cout << "Enter the string:";
    getline(cin,a);

    int length = a.length();
    int n = length;

    while (n--)
    {
        /* code */
        cout << a[n];
        //string firstword = a[n];
       // if(firstword[0] == 'a' || firstword[0] == 'e'){
       //     cout << firstword;
       // }else{
       //     cout << " not available";
     //   }
    }
    return 0;


}
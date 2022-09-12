#include <iostream>
using namespace std;

int main (){

    int n,tmp,rem,result=0;

    cout <<"Enter the number :";
    cin >> n;

    tmp = n;

    while (n!=0){
        rem = n %10;
        result = result*10 + rem;
        n=n/10;
    }
    cout << "Reversed number is : " << result <<endl;

    if(result == tmp){
        cout << "The number is palindrome.";
    }else{
        cout << "Not a palindrome";
    }
    return 0;
}
#include <iostream>
using namespace std;
int sum(int *a);
int subtract(int *b);
int main (){

    int a;
    cout << "Enter the two values:";
    cin >> a;

    int *c = &a;
    sum(c);
    subtract(c);
    cout << "pointer value  is :" << *c<<endl;
    cout << "pointer address is : " << c<<endl;
return 0;
}
int sum(int *a){
    cout << (*a)*5<< endl;
    return 0;
}
int subtract (int *b){
    cout << -((*b)-2) << endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int h1,m1,s1,h2,m2,s2,hours,minutes,seconds;
    cout <<"Enter the hours 1 :";
    cin >> h1;
    cout << "Enter the minutes 1";
    cin >> m1;
    cout <<"Enter the seconds 1:";
    cin >> s1;
    cout <<"Enter the hours 2 :";
    cin >> h2;
    cout << "Enter the minutes 2";
    cin >> m2;
    cout <<"Enter the seconds 2:";
    cin >> s2;
    hours = h1+h2+(m1+m2+(s1+s2)/60)/60;
    minutes = (m1+m2+(s1+s2)/60)%60;
    seconds = (s1+s2)%60;
    cout <<hours<<" : "<<minutes<<" : "<<seconds;
}
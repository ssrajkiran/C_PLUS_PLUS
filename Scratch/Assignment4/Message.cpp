#include<iostream>
using namespace std;
int main(){
    int time;
    cout <<"Enter the time in hours:";
    cin >> time;
    if(time == 0 || time <= 12){
        cout <<"Good Morning";
    }else if(time > 12 || time <=18){
        cout << "Good Evening";
    }else if(time > 18 || time <=24){
        cout << "Good Night";
    }
}
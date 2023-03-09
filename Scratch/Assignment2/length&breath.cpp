#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float length,breadth;
    float area;
    cout <<"Enter the length:";
    cin >> length;
    cout <<"Enter the breadth";
    cin >> breadth;
    cout <<"Area of the rectangle:";
    area = length * breadth;
    // cout << setprecision(2) << area <<endl;
    printf("%.2f",area);
}
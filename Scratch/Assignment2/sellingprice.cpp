#include<iostream>
using namespace std;
int main(){
    float price1,price2;
    float res1,res2,dis1,dis2;
    cout <<"Enter the price of product 1:";
    cin >> price1;
    cout <<"Enter the price of product 2:";
    cin >> price2;
    res1 = price1 - (price1/10) ;
    res2 = price2 - (price2/10) ;
    printf("%.2f %.2f",res1,res2);
    }
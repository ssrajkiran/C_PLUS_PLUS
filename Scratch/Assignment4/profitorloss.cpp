#include<iostream>
using namespace std;
int main(){

    int cost_price,selling_price;
    cout << "Enter the cost_price";
    cin >> cost_price;
    cout << "Enter the selling price";
    cin >> selling_price;
    if(cost_price < selling_price){
      int profit  = selling_price - cost_price;
      cout << profit <<" : Profit";
    }
    if(cost_price > selling_price){
        int loss = cost_price - selling_price;
        cout << loss << " : Loss";
    }
}
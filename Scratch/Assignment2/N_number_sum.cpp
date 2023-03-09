#include<iostream>
#include<vector>
using namespace std;
int main(){

    int count,i=0,tmp;
    vector<int> arr;
    cout <<"Enter the count of the numbers";
    cin >> count;

    while(i < count){
        cout <<"Enter the number:";
        cin >> tmp;
        arr.push_back(tmp);
        i++;
    }
    int sum =0;
    for(auto i=arr.begin();i!=arr.end();i++){
        sum = sum + *i;
    }
    cout << sum;
}
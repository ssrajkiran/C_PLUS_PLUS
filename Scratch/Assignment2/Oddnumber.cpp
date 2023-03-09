#include<iostream>
#include<vector>
using namespace std;
int main(){
    int count,tmp;
    cout << "Enter the count of numbers";
    cin >> count;
    vector <int>  arr;
    for(int i=1;i<=count;i++){
        cin >> tmp;
        arr.push_back(tmp);
    }
    int odd_count=0;
    for(auto i=arr.begin();i!=arr.end();i++){
        if(*i%2 != 0){
            odd_count++;
        }
    }
    cout << odd_count;
}
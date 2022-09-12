#include <iostream>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    vector<int> a;
    a.push_back(50);
    a.push_back(60);

    stringstream sso;
   
   vector <string> b;
    for(int i=0;i<a.size();i++){
        sso << a[i];
        while (sso >> )
    }

    cout <<"By terms of numbers:" <<endl;
    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
    return 0;
}
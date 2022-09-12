#include<iostream>
using namespace std;
void getdata();
int main (){
  getdata();
}



string getinput(){
    string n;
    cout << "Enter the name : " <<endl;
    cin >> n;
    return n;
}

int len(string name){
    int n;
    n= name.length();
    return n;
}

bool check(int n){
    if (n < 5 ){
        return false;
    }else{
        
        return true;
    }
}

void getdata(){
    string name;
    int l;

    name = getinput();
    l = len(name);

    cout << name <<endl;
    cout << l << endl;   
     bool n = check(l);
    if(n){
        cout << "Your word passed." <<endl;
    }else{
        cout << "Your word is less than 5 " <<endl;
       getdata();
    }
}
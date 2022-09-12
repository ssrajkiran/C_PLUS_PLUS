#include<iostream>
using namespace std;
int len (int a);
int main (){

    string a;
    cout << "Enter the string : ";
    getline(cin ,a);

    int length = a.length();

    cout << "Length of the string : "<< length <<endl;
    string sum1,sum2;
    int count1 =0,count =0,space=0;
    for(int i=0;i<length;i++){
        if (isalpha(a[i])){
          //  cout << int(a[i])<<" ";
          sum1 = sum1 + a[i] ;
          count++;
        }else if (isspace(a[i])){
            space++;
        } else {
            // cout << int(a[i]) << " ";s
            sum2 = sum2 + a[i];
            count1++;
        }
    }
   
    cout <<"-----Splitted onces------ " <<  endl;
    cout <<"Characters are :"<<sum1 <<" "<<"("<<count<<")"<<endl ;
    cout << "Numbers are :" << sum2 <<" "<< "(" <<count1 << ")"<<endl;
    cout << "Spaces are "<<"("<<space <<")"<<endl;

    int total = count+count1+space;
    if(total == length){
        cout<<" All are splitted ";
    }else{
        cout <<"All are not splitted";
    }

}
 
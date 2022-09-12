#include<iostream>
using namespace std;

int main(){

   int t1=0,t2=1,n,nexterm;

   cout << "Enter the range :";
   cin>>n;

   cout << "The fibonacci series are : " << t1 <<"," <<t2 << ",";

   nexterm = t1+t2;

   while (nexterm <=n){

    cout << nexterm <<",";
    t1=t2;
    t2=nexterm;
    nexterm = t1+t2;
   }
    return 0;
}
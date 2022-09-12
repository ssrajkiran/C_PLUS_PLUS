#include <iostream>
using namespace std;

int main (){

   int start,end,isprime,tmp;

   cout << "Enter starting and ending number :";
   cin >> start >> end ;

   if (start > end ){
    tmp =start ;
    start=end;
    end=tmp;
   }
   for(int i =start;i<=end;i++){
    isprime=true;
    if(i == 0 || i==1)
    continue;

    for (int j=2;j<=i/2;j++){
        if(i%j == 0){
            isprime=false;
        }
    }
    if(isprime){
        cout<< "prime numbers are :" << i<<endl;
    }

   }
   return 0;




     
    return 0;
}
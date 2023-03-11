#include <bits/stdc++.h>
using namespace std;
int isprime(int num){
   if (num <= 1)
      return 0;
   for (int i = 2; i <= num/2; i++){
      if (num % i == 0)
         { return 0; }
   }
   return 1;
}

  
int main(){
   int START=5, END=20;
    int count=0;
   for(int i=START;i<=END;i++){
      if(isprime(i)==1)
         { count++; }
   }
   cout << count;

  
}
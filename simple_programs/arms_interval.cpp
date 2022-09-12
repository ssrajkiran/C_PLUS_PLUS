#include <iostream>
#include<math.h>
using namespace std;

int main (){

   int start ,end ;
    int rem,result=0;
   cout <<"Enter the starting and ending number : ";
   cin >> start >> end;
    int tmp;
   // finding greatest number 
   if(start > end){
    tmp = start;
    start = end;
    end =tmp;
   }

   for(int i =start;i<=end;i++){

    int tmp = i;
    int count =0;
    //count 
    while (tmp > 0){
        count++ ;
        tmp =tmp/10;
    }
    

    //armstrong
    int t = i; 
    while (t > 0){
        rem = t%10;
        result=result + pow(rem,count);
        t = t/10;
    }
     if(result == i){
        cout <<"Armstrong " << result<<endl;
    }else{
        cout << "Not a armstrong";
    }
  
   }
    
   
    return 0;
}
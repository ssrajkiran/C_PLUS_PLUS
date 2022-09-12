#include <iostream>
using namespace std; 

int main(){

 int n,rem,reversed=0;

 cout << "Enter the number want to reverse :";
 cin >> n;

 while (n!=0){
    rem = n %10;
    reversed = reversed *10 +rem;
    n=n/10;
    
 }
cout << reversed <<endl;
   
 return 0;
}
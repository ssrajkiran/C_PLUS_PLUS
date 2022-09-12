#include <iostream>
using namespace std;

int main (){

    for(int i =1;i<=5;i++){

     
         for (int j=5;j>i;j--){
        cout << j;
       }
       cout <<endl;
       
    }
    for(int i =1;i<=5;i++){

      for(int k=0;k<i;k++){
            cout <<k;
        }
        cout<<endl;

}


    return 0;
}
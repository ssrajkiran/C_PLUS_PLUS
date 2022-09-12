#include<iostream>
using namespace std;

struct student
{
    /* data */
    int name [1];
    int roll;
};

int main (){
    char stud[1];
    cout << sizeof(stud)<< endl;
    int n;
    cout << sizeof(int)<<endl;
    student s ;
    int length = sizeof(s);
    cout << "size of struct :" << length <<endl; 
}
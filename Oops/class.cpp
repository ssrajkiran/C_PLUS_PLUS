#include<iostream>
using namespace std;

class car{
    public:
    string name;
    int car_model;
    int price;


}benz;

int main()
{
    //car benz();
    benz.name={"CLASS B"};
    benz.car_model=12345;
    benz.price=4000;
    
    cout<<"BENZ"<<benz.name<<endl<<benz.car_model<<endl<<benz.price<<endl;
    return 0;
}
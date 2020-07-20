#include <iostream>
using namespace std;

void simpleInterest(float principle, float rate, float number)
{
    float simpleinterest;
    simpleinterest = (principle * number * rate) / 100;
    cout << "SimpleInterest:" << simpleinterest << endl;
}

int main()
{
    float principle, rate, number, simpleinterest;
    cout << "Enter the principle amount:";
    cin >> principle;
    cout << "Enter the rate of interest:";
    cin >> rate;
    cout << "Enter the number of times:";
    cin >> number;
    simpleInterest(principle, rate, number);
}
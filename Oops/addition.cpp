#include <iostream>
using namespace std;

class Addition
{
    int c;

public:
    Addition()
    {
        cout << "Class Created\n";
    }

public:
    int getSum(int a, int b)
    {
        return a+b;
    }


};

int main()
{
    int a, b, res;
    cout << "Enter the number want to add" << endl;
    cin >> a >> b;
    string operation = {"Addition"};
    cout << "Your mode is :" << operation << endl;
    Addition add;
    res = add.getSum(a, b);
    cout << "Sum of:" << a << " " << b << " is : " << res << endl;

    return 0;
}

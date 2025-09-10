#include <iostream>
using namespace std;
int main()
{
    int a, b, sum, mul, sub;
    float div;
    
    cout << "Enter the value of a:" << endl;
    cin >> a;
    cout << "Enter the value of a:" << endl;
    cin >> b;
    sum = a + b;
    mul = a * b;
    div = a / b;
    sub = a - b;
    cout<<"sum="<<sum<<endl;
    cout<<"multiplication="<<mul<<endl;
    cout<<"division="<<div<<endl;
    cout<<"subtraction="<<sub<<endl;
    return 0;
}

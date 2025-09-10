#include <iostream>
using namespace std;
int reverseNum(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int rem = n % 10;
         n = n / 10;
        rev = rev * 10 + rem;
    }
    cout << rev << endl;
    return 0;
}
int main()
{
    reverseNum(1234);
    return 0;
}
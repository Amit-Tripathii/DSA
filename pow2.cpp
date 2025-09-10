#include <iostream>
using namespace std;
void powTwo(int n)
{
    while (n % 2 == 0)
    {
        
            n = n / 2;
    }
    if (n == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
int main()
{
    powTwo(32);
}
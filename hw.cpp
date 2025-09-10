#include <iostream>
using namespace std;
bool primeNo(int n)
{
    bool isPrime = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    };
   return true;
}

void printPrimeNo(int num){
     for (int i = 2; i < num; i++)
    if( primeNo(i)){
        cout<<i<<endl;
    }
}

int main()
{

    // primeNo(11);
    printPrimeNo(10);
    return 0;
}
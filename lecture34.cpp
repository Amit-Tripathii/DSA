#include <iostream>
using namespace std;

// void printDigits(int n)
// {int count =0;
//     int sum=0;
//     while (n != 0)
//     {
//         int digit = n % 10;
//         count++;
//         sum+=digit;
//         cout << digit << endl;
//         n = n / 10;
//     }
//     cout<<count<<endl;
//     cout<<sum<<endl;
// }

// int main()
// {
//     int n = 3568;

//     printDigits(n);
//     return 0;
// }

// Armstrong Number

bool isArmstrong(int n)
{
    int copyN=n;
    int sumOfCubes=0;

    while(n!=0){
        int dig=n%10;
        sumOfCubes+=(dig*dig*dig);

        n=n/10;

    }
    return sumOfCubes==copyN;
}

int main()
{
    int n = 153;
    if (isArmstrong(n))
    {
        cout << "is an armstrong" << endl;
    }
    else
    {
        cout << "not an armstrong number" << endl;
    }
}
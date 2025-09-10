#include <iostream>
using namespace std;




void reverseArray(int arr[], int sz)
{
    int start = 0;
    int end = sz - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int sumOfArray(int arr[], int sz)
{
    int sum = 0;
    for (int i = 0; i < sz; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int prodOfArray(int arr[], int sz)
{
    int product = 1;
    for (int i = 0; i < sz; i++)
    {
        product *= arr[i];
    }
    return product;
}
int main()
{
    int nums[] = {12, 23, 45, 2, 8, 3, 89};
    int sz = 7;
    
    reverseArray(nums, 7);
    for (int i = 0; i < sz; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    cout<<sumOfArray(nums, 7)<<endl;
    cout<<prodOfArray(nums, 7)<<endl;
    return 0;
}
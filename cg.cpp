#include <iostream>
using namespace std;

void smallest(int arr[],int sz)
{
    int indexOfSmallest=-1;
    int smallest = INT_MAX;
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            indexOfSmallest=i;
        }
    }
    cout<<"Smallest="<<smallest<<"index="<<indexOfSmallest<<endl;
}

void largest(int arr[],int sz)
{
  
    int largest = INT_MIN;
    int indexOfLagest=-1;
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            indexOfLagest=i;
        }
    }
    cout<<"Largest="<<largest<<"index="<<indexOfLagest<<endl;

}
int main(){
    int nums[] = {12, 23, 45, 2, 8, 3, 89};
    int sz = 7;
    smallest(nums,7);
     largest(nums,7);
}
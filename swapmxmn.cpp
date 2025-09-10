#include <iostream>
using namespace std;

// int smallest(int arr[],int sz)
// {
//     int indexOfSmallest=-1;
//     int smallest = INT_MAX;
//     for (int i = 0; i < sz; i++)
//     {
//         if (arr[i] < smallest)
//         {
//             smallest = arr[i];
//             indexOfSmallest=i;
//         }
//     }
//     return indexOfSmallest;
// }

// int largest(int arr[],int sz)
// {

//     int largest = INT_MIN;
//     int indexOfLagest=-1;
//     for (int i = 0; i < sz; i++)
//     {
//         if (arr[i] > largest)
//         {
//             largest = arr[i];
//             indexOfLagest=i;
//         }
//     }
//     return indexOfLagest;

// }
//  void swapping(int arr[],int sz){
//     int smallestIndex=smallest(arr, sz);
//     int largestestIndex=largest(arr, sz);

//     swap(arr[smallestIndex],arr[largestestIndex]);
//     for (int i=0;i<sz;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//  }
void uniqueVal(int arr[], int sz)
{
    
    for (int i = 0; i < sz; i++)
    {bool isUnique = true;
        for (int j = 0; j < sz; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }

        if (isUnique)
        {
            cout << arr[i] << " ";
        }
      
    }
      cout << endl;
}

int main()
{
    int nums[] = {12, 12, 45, 2, 8, 3, 89};
    int sz = 7;
    // swapping(nums,sz);
    uniqueVal(nums,sz);
    return 0;
}
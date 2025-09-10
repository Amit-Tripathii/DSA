#include <iostream>
#include<vector>
using namespace std;

// Maximum Subarry Sum
//Kadane's Algo
int maxSubArray(vector<int>&nums){
    int currSum=0,maxSum=INT_MIN;
    for(int val:nums){
        currSum+=val;
        maxSum=max(currSum,maxSum);

        if(currSum<0){
            currSum=0;
        }
    }
    return maxSum;
}



//Brute force approach
int main()
{   vector<int>nums={3,-4,5,4,-1,7,-8};
    cout<<maxSubArray(nums)<<endl;
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int maxSum = INT_MIN;

    for (int st = 0; st < n; st++)
    {
        int currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout<<"Max subarray Sum="<<maxSum;
    return 0;
}
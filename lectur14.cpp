#include <iostream>
#include <vector>
using namespace std;
// Brute force approach
int maxArea(vector<int> &height)
{
    int maxWater = 0;
    for (int i = 1; i < height.size(); i++)
    {
        for (int j = i + 1; j < height.size(); j++)
        {
            int wt = j - i;
            int ht = min(height[i], height[j]);
            int currArea = wt * ht;

            maxWater = max(maxWater, currArea);
        }
    }
    return maxWater;
}
// optimal Approach
int maxMum(vector<int> &height)
{
    int maxPani = 0;
    int lp = 0, rp = height.size() - 1;
    while (lp < rp)
    {
        int ht = min(height[lp], height[rp]);
        int wt = rp - lp;
        int currPani = ht * wt;
        maxPani = max(maxPani, currPani);
        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxPani;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(height)<<endl;
    cout << maxMum(height);
    return 0;
}
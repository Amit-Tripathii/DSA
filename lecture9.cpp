#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    int target = 4;
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     if (vec[i] == target)
    //     {
    //         cout << "Found at Index=" << i << endl;
    //         return 0;
    //     }
        
    // }
    // cout<<"Target not found";
    // return -1;

    int start=0;
    int end=vec.size()-1;
    while(start<end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
    for(int val:vec){
        cout<<val<<endl;
    }
}
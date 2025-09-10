#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    int target = 4;
    
    for (int i = 0; i < vec.size(); i++) {  // Iterate using index
        if (vec[i] == target) {
            cout << "Found at Index = " << i << endl;  // Print the index
            return 0;  // Exit the program after finding the target
        }
    }

    // If the target is not found, print not found
    cout << "Target not found" << endl;
    return -1;
}

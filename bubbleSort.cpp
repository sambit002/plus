// here I shall try to make use of bubble sort algo
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums{100,5,2,4,25,30};
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i; j < nums.size() - 1; j++) {
            if (nums[j] > nums[j+1]) {
                swap(nums[j], nums[j+1]);
            }
        }
    }
    cout << "Sorted array: ";
    for (int j = 0; j < nums.size(); j++) {
        cout << nums[j] << " ";
    }
    cout << endl;
    return 0;
}
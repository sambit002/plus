#include <bits/stdc++.h>
using namespace std;
//[4,2]

auto insertionSort(vector<int> arr) {
    for (int i = 1; i < arr.size(); ++i) {
        int temp = arr[i];
        int j;
        for (j = i - 1; j >= 0 && arr[j] > temp; --j) {
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
    return arr;
}

int main() {
    vector<int> arr{4,5,1,10,3,6};
    vector<int> res = insertionSort(arr);
    for (auto i = res.begin(); i != res.end(); ++i) {
        cout << *i << endl;
    }
    return 0;
}
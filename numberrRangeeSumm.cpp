//here we shall write the code for finding sum of all numbers in a range

#include<bits/stdc++.h>
using namespace std;

int numberrRangeeSumm(int num) {
    if (num == 1) {
        return 1;
    } else {
        return numberrRangeeSumm(num) + numberrRangeeSumm(num - 1);
    }
}

int main() {
    int res = numberrRangeeSumm(5);
    cout << res <<endl;
    return 0;
}
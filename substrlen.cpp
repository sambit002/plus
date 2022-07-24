// here I shall try to translate the problem of 
#include <bits/stdc++.h>
using namespace std;

int pos(string s) {
    int l = 0;
    int r = s.length() - 1;
    int poss;
    while (l <= r) {
        int middle = (l + r) / 2;
        int mid = s[middle];
        if ('c' > mid) {
            l = middle + 1;
        } 
        else if ('c' < mid) {
            r = middle - 1;
        }
        else {
            poss = middle;
            return middle;
        } 
    }
    return 0;
}

int main() {
    // here I need a string
    string s = "abcccd";
    int post = pos(s);
    cout << "post: " << post << endl;
    int count = 1;
    int left = post - 1;
    while (left >= 0 && s[left] == 'c') {
        left--;
        count++;
    }
    int right = post + 1;
    while (right <= s.length() - 1 && s[right] == 'c') {
        right++;
        count++;
    }
    cout << "The count of c in the string is: " << count << endl;
    return 0; 
}
#include <bits/stdc++.h>
#include <map>
using namespace std;

int matchSubstr(string shor, string lon) {
    int count = 0; //this one shall be used to loop through
    for (int i = 0; i < lon.length(); i++) {
        for (int j = 0; j < shor.length(); j++) {
            if (shor[j] != lon[i+j]) {
                break;
            }
            else {
                count++;
            }
        }
    }
    return count;  
};

bool anagram(string a, string b) {
    map<char, int> ob1;
    map<char, int> ob2;
    for (int i = 0; i < a.length(); i++) {
        char key = a[i];
        if (ob1.find(key) == ob1.end()) {
            ob1[key] = 1;
        }
        else {
            ob1[key] = ob1[key] + 1;
        }
    }
    for (int i = 0; i < b.length(); i++) {
        char key = b[i];
        if (ob2.find(key) == ob2.end()) {
            ob2[key] = 1;
        }
        else {
            ob2[key] = ob2[key] + 1;
        }
    }
    for (int i = 0; i < b.length(); i++) {
        char key = b[i];
        if (ob1.find(key) == ob1.end()) {
            return false;
        }
        else if (ob1[key] != ob2[key]) {
            return false;
        }
    }
    return true; 
}

// we shall have the length of substring in a string
// we shall write two functions for achieving it
// first to find the first/only location of the character
// then we will find the length of the substring

int findPosition(string s, char v) {
    int start = 0;
    int end = s.length() - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        char mide = s[mid];
        if (v > mide) {
            start = mid + 1;
        }
        else if (v < mide) {
            end = mid - 1;
        }
        else if (v == mide) {
            return mid;
        }
    }
    return -1;
    // return -1; 
}

int substrLength(string s, char v) {
    int position = findPosition(s, v);
    if (position != -1) {
        int len = 1;
        int left = position - 1;
        while (s[left] == v && left >= 0) {
            left--;
            len++;
        }
        int right = position + 1;
        while (s[right] == v && right <= s.length() - 1) {
            right++;
            len++;
        }
        return len;
    }
    return 0;
}
string sorted(string s) {
    int start = 0;
    int end = s.length() - 1;
    while (start <= end) {
        for (int i = 0; i < end; i++) {
            if (s[i] > s[i+1]) {
                char temp;
                temp = s[i];
                s[i] = s[i + 1];
                s[i+1] = temp;
            }
        }
        end--;
    }
    return s;
}

int main() {
    int count = matchSubstr("abadaba", "ab");
    bool ana = anagram("sam", "mass");
    int len = substrLength("abbccccd", 'b');
    string sortedS = sorted("xyabc");
    cout << sortedS << endl;
    return 0;
}
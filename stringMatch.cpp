// here we shall try and find out how many times a substring appears in a string
// so let us begin
// for each letter of the longer string, we run through the entire short string
#include <bits/stdc++.h>
using namespace std;

int subtsr(string lon, string sho) {
    int count = 0;
    for (int i = 0; i < lon.length(); i++) {
        for (int j = 0; j < sho.length(); j++) {
            if (sho[j] != lon[i+j]) {
                break;
            }
            if (j == sho.length() - 1) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int repeat = subtsr("abababa", "ba");
    cout << repeat << endl;
    return 0;
}
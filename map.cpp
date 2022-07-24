//here I shall try to write a map
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
    map<char, int> mymap;
    mymap.insert({'f', 50});
    for (auto&& [first,second] : mymap) {
        cout << first << endl;
        cout << second << endl;
    }
    // cout << mymap << endl;
    return 0;
}
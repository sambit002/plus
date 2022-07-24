#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) {
    return 0;
}

int main() {
    char a = 'a';
    char b = 'b';
    // summation of two chars is equal to the sum of their ascii values
    cout << a + b << " summation of two chars" << endl;
    string c, d;
    cin >> c >> d;
    cout << "First input string: " << c << " second input string: " << d << endl;
    int i;
    for (i = 0; i < 5; ++i) {
        string s;
        cout << "string " << i + 1 << ": ";    
        cin >> s;
        cout << "You entered string " << i + 1 << " as " << s << endl;
    }
    return 0;
}
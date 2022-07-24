// here we shall see overflow for common data types
// when we multiply 10 ^ 5 with 10 ^ 5, we have an oveflow
// because int has range 10 ^ -9 to 10 ^ 9
// double data type can store very large numbers, but the stored numbers are not very accurate
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 100000;
    int b = 100000; // this will result in an overflow
    cout << a * b << endl;
    return 0;
}

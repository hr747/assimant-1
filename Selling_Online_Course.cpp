#include <iostream>
using namespace std;

int main() {
    long long X;
    cin >> X;

    if (X == 0) {
        cout << 0 << endl; 
        return 0;
    }

    long long result = (500 + X - 1) / X; 
    cout << result << endl;

    return 0;
}
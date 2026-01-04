#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long long target = -1; 
    bool possible = true;

    for (int i = 0; i < n; i++) {
        long long r_sum = 0;
        bool z= false;

        for (int j = 0; j < m; j++) {
            long long power;
            cin >> power;
            r_sum += power; 
            if (power == 0) {
            z = true;
            }
        }

       
        if (!z) {
            if (target == -1) {
                target = r_sum; 

            } else if (target != r_sum) {
                possible = false; 
            }
        }
    }

    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
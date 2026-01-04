#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    long long M;
    cin >> S >> M;

    long long current_pos = 0;
    char last_char = ' ';

    for (int i = 0; i < S.length(); i++) {
        if (S[i] >= 'a' && S[i] <= 'z') {
           
            current_pos++;
            last_char = S[i];
            
            
            if (current_pos == M) {
                cout << last_char << endl;
                return 0;
            }
        } 
        else if (S[i] >= '2' && S[i] <= '9') {
           
            int repeat_times = S[i] - '0';
            
           
            long long next_pos = current_pos + (repeat_times - 1);
            
           
            if (M > current_pos && M <= next_pos) {
                cout << last_char << endl;
                return 0;
            }
            
            current_pos = next_pos;
        }
    }

    return 0;
}
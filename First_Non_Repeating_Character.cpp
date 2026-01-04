#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    int freq[26] = {0}; 

   
  for(int i = 0; i < S.size(); i++) {
        char c = S[i];         
        freq[c - 'a']++;      
    }


    
    for(char c : S) {
        if(freq[c - 'a'] == 1) {
            cout << c << endl;
            return 0;
        }
    }

    
    cout << -1 << endl;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    cin >> n;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long int> prefix(n);
    prefix[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + v[i];
    }
    reverse(prefix.begin(), prefix.end());
    for (int i = 0; i < n; i++)
    {
        cout << prefix[i] << " ";
    }

    return 0;
}
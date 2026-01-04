#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    cin >> n;
    vector<int> v(n+1);
    for (int i = 1; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> pr(n+1);
    pr[0] = v[0];
    for (int i = 1; i <= n; i++)
    {
        pr[i] = pr[i - 1] + v[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        if (l == 0) {
        cout << pr[r] << endl;
    } else {
        cout << pr[r] - pr[l - 1] << endl;
    }
    }
    return 0;
}
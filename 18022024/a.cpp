#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

void solve()
{
    int n;
    cin >> n;
    char a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool spike = false;
    int m = 0;
    int r = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (spike) {
            if (a[i] == '*') {
                break;
            } else {
                m = 0;
                spike = false;
            }
        }
        if (a[i] == '*')
        {
            if (m == 0)
            {
                m++;
                spike = true;
            }
        }
        if (a[i] == '@')
        {
            r++;
        }
    }
    cout << r << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(nullptr);

    int NUMBER_OF_TESTS;
    cin >> NUMBER_OF_TESTS;
    for (int t = 1; t <= NUMBER_OF_TESTS; t++)
        solve();
    return 0;
}
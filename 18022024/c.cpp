#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

void solve()
{
    long long n, m;
    cin >> n >> m;

    long long a[n];
    long long tmp;
    for (size_t i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp % m == 0)
        {
            a[i] = tmp;
        } else {
            a[i] = tmp % m;
        }
    }

    char c[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    int l = 0, r = n - 1;
    long long mul = 1;
    for (size_t i = 0; i < n; i++)
    {
        mul *= a[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << mul % m << " ";
        if (c[i] == 'L')
        {
            mul /= a[l];
            l++;
        }
        if (c[i] == 'R')
        {
            mul /= a[r];
            r--;
        }
    }

    cout << "\n";
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
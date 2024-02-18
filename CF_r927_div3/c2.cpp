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
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    char c[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    int answ[n];

    int indx = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (c[i] == 'L')
        {
            indx++;
        }
    }
    if (indx == -1)
    {
        indx = 0;
    }
    long long mult = 1;
    int l = indx;
    int r = indx;
    mult *= a[indx] % m;
    answ[n - 1] = mult;
    for (size_t i = n - 2; i >= 0; --i)
    {
        answ[i] = mult;
        if (c[i] == 'L')
        {
            l--;
            mult *= (a[l] % m);
            mult %= m;
        }
        if (c[i] == 'R')
        {
            r++;
            mult *= (a[r] % m);
            mult %= m;
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
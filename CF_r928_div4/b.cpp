#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

void solve()
{
    int n;
    cin >> n;
    string a[n];

    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool loop = true;
    bool flag = false;
    int len = 0;
    int x = 0;
    int y = 0;
    for (size_t i = 0; i < n && loop; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (a[i][j] == '1')
            {
                if (!flag)
                {
                    x = j;
                    y = i;
                }
                flag = true;
            }
            if (a[i][j] == '0' && flag)
            {
                loop = false;
                break;
            }
            if (flag)
            {
                len++;
            }
        }
    }

    // cout << "y: " << y << " x: " << x << " len: " << len << "\n";

    if ((y + len - 1) >= n || (x + len - 1) >= n)
    {
        cout << "TRIANGLE\n";
    }
    else
    {
        if (a[y][x] == a[y + len - 1][x + len - 1])
        {
            cout << "SQUARE\n";
        }
        else
        {
            cout << "TRIANGLE\n";
        }
    }
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
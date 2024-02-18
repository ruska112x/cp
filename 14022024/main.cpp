#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;
    cin >> x;
    char r[3];
    int n = 2;
    while (x > 0)
    {
        for (char c = 'z'; c >= 'a'; c--)
        {
            if (x - c + 96 >= n)
            {
                r[n] = c;
                n -= 1;  
                x -= c - 96;
                break;
            }
        }
    }
    cout << r[0] << r[1] << r[2] << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int x;
    for (int i = 0; i < n; i++)
    {
        solve();
    }

    return 0;
}
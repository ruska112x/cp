#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;
    int a[n];
    int sum_a = 0;
    for (int j = 0; j < n; j++)
    {
        cin >> a[j];
        sum_a += a[j];
    }

    int max = sum_a / n;
    int diff = 0;
    for (int i = 0; i < n; i++)
    {
        diff += a[i] - max;
        if (diff < 0)
        {
            cout << "NO\n";
            return;
        }
    }

    if (diff == 0)
    {
        cout << "YES\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        solve();
    }

    return 0;
}
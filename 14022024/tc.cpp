#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n, x, y;
    cin >> n;
    cin >> x;
    cin >> y;
    vector<int> a;
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a.emplace_back(t);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ( ((a[i] + a[j]) % x == 0) && ((a[i] - a[j]) % y == 0) ) {
                r++;
            }
        }
    
    }
    cout << r << "\n";
    
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
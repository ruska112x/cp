#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int i = 0;
    while (a[i] % 2 == 0)
    {
        ++i;
    }
    int j = i;
    while (j < n && a[j] % 2 == 1)
    {
        ++j;
    }
    string result(max(0, (j - i - 1)), 'x');
    if (i != 0)
    {
        string prefix(max(0, (i - 1)), 'x');
        result = prefix + "+" + result;
    }
    if (j != n)
    {
        string suffix(max(0, n - j - 1), 'x');
        result = result + "+" + suffix;
    }
    cout << result << endl;
}

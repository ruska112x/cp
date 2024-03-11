#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(nullptr);
    int n;
    cin >> n;
    long s = 0;
    for (int i = 0; i < n; ++i)
    {
        int ai;
        cin >> ai;
        if (ai % 4 == 3)
        {
            s += ai / 4 + 2;
        }
        else
        {
            s += ai / 4 + ai % 4;
        }
    }

    cout << s << endl;
}

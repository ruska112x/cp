#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(nullptr);
    long n, k, d;
    cin >> n >> k >> d;
    if (n % k == 0)
    {
        long r = n;
        for (int i = 0; i < d; ++i)
        {
            r *= 10;
        }

        cout << r << endl;
    }
    else
    {
        bool flag = true;
        long tn = n * 10;
        for (long i = 0; i < 10; ++i)
        {
            if ((tn + i) % k == 0 && flag)
            {
                flag = false;
                long r = tn + i;
                for (int j = 0; j < d - 1; ++j)
                {
                    r *= 10;
                }
                cout << r << endl;
            }
        }
        if (flag)
        {
            cout << -1 << endl;
        }
    }
}

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

void solve()
{
    char tmp;
    int a = 0;
    for (size_t i = 0; i < 5; i++)
    {
        cin >> tmp;
        if (tmp == 'A') {
            a++;
        }
    }
    if (a >= 3) {
        cout << "A\n";
    } else {
        cout << "B\n";
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
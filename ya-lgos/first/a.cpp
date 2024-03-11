#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p, v, q, m;
    cin >> p >> v >> q >> m;

    int l1 = p - v;
    int r1 = p + v;
    int l2 = q - m;
    int r2 = q + m;
    int result;

    if (l1 > l2) {
        swap(l1, l2);
        swap(r1, r2);
    }

    if (r1 == l2) {
        result = r1 - l1 + r2 - l2 + 1;
    } else if (r1 > l2) {
        result = r1 - l1 + r2 - l2 + 1 - (min(r1, r2) - max(l1, l2));
    } else if ((l2 < l1) && (r1 < r2)) {
        result = r2 - l2 + 1;
    } else {
        result = r1 - l1 + r2 - l2 + 2;
    }

    cout << result << "\n";

    return 0;
}
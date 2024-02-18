#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // gp_hash_table<int, int> == hash map
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
template <typename T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;
template <typename T>
using max_heap = priority_queue<T, vector<T>, less<T>>;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename K, typename V>
using hashmap = gp_hash_table<K, V>;

template <typename A, typename B>
ostream &operator<<(ostream &out, pair<A, B> p)
{
    out << "(" << p.first << ", " << p.second << ")";
    return out;
}
template <typename T>
ostream &operator<<(ostream &out, vector<T> v)
{
    out << "[";
    for (auto &x : v)
        out << x << ", ";
    out << "]";
    return out;
}
template <typename T>
ostream &operator<<(ostream &out, set<T> v)
{
    out << "{";
    for (auto &x : v)
        out << x << ", ";
    out << "}";
    return out;
}
template <typename K, typename V>
ostream &operator<<(ostream &out, map<K, V> m)
{
    out << "{";
    for (auto &e : m)
        out << e.first << " -> " << e.second << ", ";
    out << "}";
    return out;
}
template <typename K, typename V>
ostream &operator<<(ostream &out, hashmap<K, V> m)
{
    out << "{";
    for (auto &e : m)
        out << e.first << " -> " << e.second << ", ";
    out << "}";
    return out;
}

#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(nullptr)
#define TESTS(t)            \
    int NUMBER_OF_TESTS;    \
    cin >> NUMBER_OF_TESTS; \
    for (int t = 1; t <= NUMBER_OF_TESTS; t++)
#define sgn(a) ((a) > eps ? 1 : ((a) < -eps ? -1 : 0))
#define precise(x) fixed << setprecision(x)
#define debug(x) cerr << "Line(" << __LINE__ << ") -> " \
                      << "> " << #x << " = " << x << endl;
#define pb push_back
#define rnd(a, b) (uniform_int_distribution<int>((a), (b))(rng))
#define endl '\n'
#define F first
#define S second
#define vi vector<int>
#define ll long long
#define vll vector<ll>
#define pb push_back
#define eb emplace_back
#define forn(i, n) for (int(i) = 0; (i) < (n); ++(i))
#define fornf(i, n, f) for (int(i) = 0; ((i) < (n)) && (f); ++(i))
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define isOn(s, j) (s & (1 << j))
#define setBit(s, j) (s |= (1 << j))
#define clearBit(s, j) (s &= ~(1 << j))
#define toggleBit(s, j) (s ^= (1 << j))
#define lowBit(s) (s & (-s))
#define setAll(s, n) (s = (1 << n) - 1)

#define modulo(s, N) ((s) & (N - 1)) // returns s % N, where N is a power of 2
#define isPowerOfTwo(s) (!(s & (s - 1)))
#define nearestPowerOfTwo(s) (1 << lround(log2(s)))
#define turnOffLastBit(s) ((s) & (s - 1))
#define turnOnLastZero(s) ((s) | (s + 1))
#define turnOffLastConsecutiveBits(s) ((s) & (s + 1))
#define turnOnLastConsecutiveZeroes(s) ((s) | (s - 1))

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
clock_t __clock__;
void startTime() { __clock__ = clock(); }
void timeit(string msg) { cerr << "> " << msg << ": " << precise(6) << ld(clock() - __clock__) / CLOCKS_PER_SEC << endl; }
const ld PI = asin(1) * 2;
const ld eps = 1e-14;
const int oo = 2e9;
const ll OO = 2e18;
const ll MOD = 1000000007;
const int MAXN = 1000000;
void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif // ONLINE_JUDGE
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif // ONLINE_JUDGE
    FAST_IO;

    startTime();
    TESTS(t)
    solve();
    // timeit("Finished");
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(NULL);
  cin.tie(0);
  cout.tie(0);

  int days, save;

  cin >> days >> save;
  long long result = 0;
  deque<pair<int, int>> dq;
  vector<int> bought(days);
  for (int i = 0; i < days; ++i) {
    int value;
    cin >> value;
    while (!dq.empty() && dq.front().second <= i - save) {
      dq.pop_front();
    }
    while (!dq.empty() && dq.back().first >= value) {
      dq.pop_back();
    }
    dq.push_back({value, i});
    result += dq.front().first;
    bought[dq.front().second]++;
  }
  cout << result << "\n";
  for (int i = 0; i < days; ++i) {
    cout << bought[i] << " ";
  }
  cout << "\n";

  return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(nullptr);

  string nickname;

  cin >> nickname;

  bool upper = false;
  bool lower = false;
  bool number = false;
  if (nickname.size() >= 8) {
    for (char i = 'A'; i <= 'Z'; ++i) {
      if (nickname.find(i) != string::npos) {
        upper = true;
        break;
      }
    }
    for (char j = 'a'; j <= 'z'; ++j) {
      if (nickname.find(j) != string::npos) {
        lower = true;
        break;
      }
    }
    for (int k = 0; k <= 9; ++k) {
      if (nickname.find(to_string(k)) != string::npos) {
        number = true;
        break;
      }
    }
  }
  if (upper && lower && number) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }

  return 0;
}

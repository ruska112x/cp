#include <bits/stdc++.h>

using namespace std;

map<pair<int, int>, int> points;

bool check_line(vector<int> &sequence) {
  int onesCount = 0;
  for (int value : sequence) {
    if (value == 1) {
      onesCount++;
    } else {
      onesCount = 0;
    }
    if (onesCount == 5) {
      return true;
    }
  }
  return false;
}

bool check_win(int posX, int posY) {
  vector<int> h, v, md, sd;
  for (int i = -4; i <= 4; ++i) {
    if (points.count({posX, posY + i}) &&
        points[{posX, posY + i}] == points[{posX, posY}]) {
      h.push_back(1);
    } else {
      h.push_back(0);
    }
    if (points.count({posX + i, posY}) &&
        points[{posX + i, posY}] == points[{posX, posY}]) {
      v.push_back(1);
    } else {
      v.push_back(0);
    }
    if (points.count({posX + i, posY + i}) &&
        points[{posX + i, posY + i}] == points[{posX, posY}]) {
      md.push_back(1);
    } else {
      md.push_back(0);
    }

    if (points.count({posX - i, posY + i}) &&
        points[{posX - i, posY + i}] == points[{posX, posY}]) {
      sd.push_back(1);
    } else {
      sd.push_back(0);
    }
  }
  if (check_line(h) || check_line(v) || check_line(md) || check_line(sd)) {
    return true;
  } else {
    return false;
  }
}

int main() {
  ios::sync_with_stdio(NULL);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int posX, posY;
    cin >> posX >> posY;
    points[{posX, posY}] = (i % 2);

    if (check_win(posX, posY) && i == n - 1) {
      if (i % 2 == 0) {
        cout << "First\n";
        return 0;
      } else {
        cout << "Second\n";
        return 0;
      }
    } else if (check_win(posX, posY)) {
      cout << "Inattention\n";
      return 0;
    }
  }
  cout << "Draw\n";

  return 0;
}

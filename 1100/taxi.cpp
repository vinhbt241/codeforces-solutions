// https://codeforces.com/problemset/problem/158/B

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int group[4] = {0};
  int students;
  for(int i = 0; i < n; i++) {
    cin >> students;
    group[students - 1]++;
  }

  int cars = group[3];

  for(int i = 0; i < group[2]; i++) {
    if(group[0] > 0) {
      group[0]--;
    }
    cars++;
  }
  cars += (group[1] / 2);
  int r = (group[1] % 2) * 2;
  int sum = group[0] + r;
  cars += (sum / 4);
  if(sum % 4 != 0) {
    cars++;
  }

  cout << cars << "\n";

  return 0;
}
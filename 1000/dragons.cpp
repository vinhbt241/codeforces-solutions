// https://codeforces.com/problemset/problem/230/A

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int s, n;
  cin >> s >> n;

  vector<pair<int, int>> dragons(n);

  for(int i = 0; i < n; i++) {
    cin >> dragons[i].first >> dragons[i].second;
  }

  sort(dragons.begin(), dragons.end());

  for(pair<int, int> dragon : dragons) {
    if(s <= dragon.first) {
      cout << "NO\n";
      return 0;
    }
    s += dragon.second;
  }

  cout << "YES\n";

  return 0;
}
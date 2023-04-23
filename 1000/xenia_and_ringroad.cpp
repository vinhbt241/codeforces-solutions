#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

int main() {
  ll n, m;
  cin >> n >> m;

  ll current_house = 1;

  ll t, r = 0, d;

  for(int i = 0; i < m; i++) {
    cin >> t;
    d = t - current_house;

    if(d < 0) {
      d += n;
    }

    r += d;
    current_house = t;
  }

  cout << r;

  return 0;
}
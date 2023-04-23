#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

int main() {
  ll n, m, a;
  cin >> n >> m >> a;

  ll r = n / a;
  if(r * a < n) {
    r++;
  }
  ll c = m / a;
  if(c * a < m) {
    c++;
  }

  cout << r * c;
  return 0;
}
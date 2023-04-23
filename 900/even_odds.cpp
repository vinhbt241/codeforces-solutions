#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

#define ll long long

int main() {
  ll n, k;
  cin >> n >> k;
  ll o = (n + 1) / 2;

  if(k <= o) {
    cout << (2 * k - 1) << endl;
  } else {
    cout << (2 * (k - o)) << endl;
  }

  return 0;
}
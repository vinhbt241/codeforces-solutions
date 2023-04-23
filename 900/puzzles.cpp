#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

#define ll long long

int main() {
  int n, m;
  cin >> n >> m; 

  vector<int> v;
  int ip;
  for(int i = 0; i < m; i++) {
    cin >> ip;
    v.push_back(ip);
  }

  sort(v.begin(), v.end());

  if(n == m) {
    cout << *(v.end() - 1) - *(v.begin());
    return 0;
  }

  int min_d = 9999;
  int cn;

  for(int i = 0; i < m - n + 1; i++) {
    cn = v[i + n - 1] - v[i];
    if(cn < min_d) {
      min_d = cn;
    }
  }

  cout << min_d;

  return 0;
}
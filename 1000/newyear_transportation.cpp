#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

int main() {
  int n, t;
  cin >> n >> t;
  int cells[n - 1];
  for(int i = 0; i < n - 1; i++) {
    cin >> cells[i];
  }

  int i = 0;
  int s = 1;
  while(i < n - 1) {
    s += cells[i];
    i += cells[i];
    if(s == t) {
      cout << "YES";
      return 0;
    }
  }

  cout << "NO";
  return 0;
}
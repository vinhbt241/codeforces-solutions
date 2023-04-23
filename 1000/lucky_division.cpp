#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

int main() {
  int n;
  cin >> n;

  if(n % 4 == 0 || n % 7 == 0) {
    cout << "YES";
    return 0;
  }

  int r, d = n;

  while(d >= 10) {
    r = d % 10;
    if(r != 4 && r != 7) {
      cout << "NO";
      return 0;
    }
    d = (d - r) / 10;
  }

  if(d == 4 || d == 7) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}
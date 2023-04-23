#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

int main() {
  int n;
  cin >> n;
  int x = 0, y = 0, z = 0;
  int tx, ty, tz;
  for(int i = 0; i < n; i++) {
    cin >> tx >> ty >> tz;
    x += tx;
    y += ty; 
    z += tz;
  }

  if(x == 0 && y == 0 && z == 0) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}
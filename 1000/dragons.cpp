#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

int main() {
  int s, n;
  cin >> s >> n;

  vector<int> d;

  int ds, pr;

  for(int i = 0; i < n; i++) {
    cin >> ds >> pr;
    s += (pr - ds);
  }

  if(s >= 0) {
    cout << "YES";
  } else {
    cout << "NO";
  }


  return 0;
}
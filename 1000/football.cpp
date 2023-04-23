#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

int main() {
  int n, a = 0, b = 0;
  string name_a, name_b, tmp;
  cin >> n;
  cin >> name_a;
  a++;

  for(int i = 1; i < n; i++) {
    cin >> tmp;
    if(tmp == name_a) {
      a++;
    } else {
      if(tmp != name_b) {
        name_b = tmp;
      }
      b++;
    }
  }

  if(a > b) {
    cout << name_a;
  } else {
    cout << name_b;
  }

  return 0;
}
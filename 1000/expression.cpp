#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

int main() {
  char equations[] = {'+', '*'};
  int a, b, c;
  cin >> a >> b >> c;

  cout << max({
    (a + b + c),
    (a + b * c),
    (a * b + c),
    (a * b * c),
    ((a + b) * c),
    (a * (b + c))
  });

  return 0;
}
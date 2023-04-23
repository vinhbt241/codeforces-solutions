#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

string intToBitMask(int n) {
  string bits;
  int currentBit;
  string c;
  while(n / 2 != 0) {
    currentBit = n % 2;
    c = to_string(currentBit);
    bits = c + bits;
    n = n / 2;
  }
  c = to_string(n);
  bits = c + bits;
  return bits;
}

int main() {
  int n;
  cin >> n;
  string s = intToBitMask(n);

  int b = 0;

  for(char c : s) {
    if(c == '1') {
      b++;
    }
  }

  cout << b;

  return 0;
}
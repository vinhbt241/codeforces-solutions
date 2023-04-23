#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

int main() {
  int b;
  cin >> b;

  int sl, ld;

  if(b < 0) {
    if(b == -10) {
      cout << 0 << endl;
      return 0;
    }

    ld = b % 10;
    sl = ((b - ld) % 100) / 10;

    if(ld <= sl) {
      b = (b - ld) / 10;
    } else {
      b = ((b - ld) / 10) - sl + ld;
    }
  }

  cout << b;

  return 0;
}
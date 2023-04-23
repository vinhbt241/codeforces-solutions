#include <iostream>
#include <vector>

using namespace std;

int main() {
  int a, b;
  int n;
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      cin >> n;
      if(n == 1) {
        a = i;
        b = j;
      }
    }
  }

  cout << abs(a - 2) + abs(b - 2) << endl;
  return 0;
}
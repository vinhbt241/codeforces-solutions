#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  int x = 0;
  cin >> n;

  char a, b, c;
  for(int i = 0; i < n; i++) {
    cin >> a >> b >> c;

    if((a == '+' && b=='+') || (b == '+' && c=='+')) {
      x++;
    }

    if((a == '-' && b=='-') || (b == '-' && c=='-')) {
      x--;
    }
  }

  cout << x << endl;

  return 0;
}
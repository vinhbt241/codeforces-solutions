#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

#define ll long long

int main() {
  int n;
  cin >> n;
  int ms = 0;
  int cs = 1;
  int cn, pn;
  cin >> pn;

  for(int i = 1; i < n; i++) {
    cin >> cn;
    if(cn >= pn) {
      cs++;
    } else {
      if(cs > ms) {
        ms = cs;
      }
      cs = 1;
    }
    pn = cn;
  }

  if(cs > ms) {
    ms = cs;
  }

  cout << ms;

  return 0;
}
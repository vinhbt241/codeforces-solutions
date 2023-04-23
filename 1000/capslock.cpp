#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define ll long long

int main() {
  string w;
  cin >> w;

  bool is_cap = true;

  for(int i = 1; i < w.length(); i++) {
    if(islower(w[i])) {
      is_cap = false;
      break;
    }
  }

  if(is_cap) {
    if(islower(w[0])){
      w[0] = toupper(w[0]);
    } else {
      w[0] = tolower(w[0]);
    }

    for(int i = 1; i < w.length(); i++) {
      w[i] = tolower(w[i]);
    }
  }

  cout << w;

  return 0;
}
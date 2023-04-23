#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

int main() {
  string w;
  cin >> w;
  string h = "olleh";

  for(char c : w){
    if(c == *(h.end() - 1)) {
      h.pop_back();
    }

    if(h.length() == 0) {
      cout << "YES";
      return 0;
    }
  }

  cout << "NO";
  return 0;
}
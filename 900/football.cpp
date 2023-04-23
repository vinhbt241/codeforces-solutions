#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

int main() {
  string line;
  cin >> line;
  char l = line[0];
  int count = 0;
  for(char c : line) {
    if(c == l) {
      count++;
    } else {
      l = c;
      count = 1;
    }

    if(count == 7) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

#define ll long long

int main() {
  string s;
  cin >> s;
  for(char c : s){
    if(c == 'H' || c == 'Q' || c == '9') {
      cout << "YES" << endl;
      return 0;
    }
  }

  cout << "NO" << endl;
  return 0;
}
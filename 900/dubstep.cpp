#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

#define ll long long

int main() {
  string s;
  getline(cin, s);
  vector<char> ws;

  for(int i = 0; i < s.length(); i++) {
    if(ws.size() < 2) {
      ws.push_back(s[i]);
    } else {
      if(s[i] == 'B' && *(ws.end() - 1) == 'U' && *(ws.end() - 2) == 'W') {
        ws.pop_back();
        ws.pop_back();
        if(ws.size() > 0 && *(ws.end() - 1) != ' ') {
          ws.push_back(' ');
        }
      } else {
        ws.push_back(s[i]);
      }
    }
  }

  for(char w : ws) {
    cout << w;
  }

  return 0;
}
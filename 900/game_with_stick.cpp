#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int s;

  s = n > m ? m : n;

  if(s % 2 == 0) {
    cout << "Malvika";
  } else {
    cout << "Akshat";
  }

  return 0;
}
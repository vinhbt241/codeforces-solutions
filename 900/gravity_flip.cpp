#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

#define ll long long

int main() {
  int n;
  cin >> n;
  vector<int> box;
  int n_col;
  for(int i = 0; i < n; i++) {
    cin >> n_col;
    box.push_back(n_col);
  }

  sort(box.begin(), box.end());

  for(int col : box) {
    cout << col << " ";
  }
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n = 5;
  int sum[5][5];
  int value[5][5] = {
    {3, 7, 9, 2, 7},
    {9, 8, 3, 5, 5},
    {1, 7, 9, 8, 5},
    {3, 8, 6, 4, 10},
    {6, 3, 9, 7, 8}
  };

  for(int y = 0; y < 5; y++) {
    for(int x = 0; x < 5; x++) {
      int cx = x - 1 < 0 ? 0 : sum[y][x - 1];
      int cy = y - 1 < 0 ? 0 : sum[y - 1][x];
      sum[y][x] = max(cx, cy) + value[y][x];
    }
  }

  cout << sum[4][4] << "\n";

  return 0;
}
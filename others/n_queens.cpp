#include <bits/stdc++.h>

using namespace std;

int cols[4], diag_pos[6], diag_neg[6];
int board[4][4];

void search(int n, int y = 0) {
  if(y == n) {
    cout << "=SOLUTION=" << "\n";
    for(int i = 0; i < 4; i++) {
      for(int j = 0; j < 4; j++) {
        cout << board[i][j] << " ";
      }
      cout << "\n";
    }
    cout << "==========" << "\n";
    return;
  }

  for(int x = 0; x < n; x++) {
    if(cols[x] || diag_pos[x + y] || diag_neg[x - y + n - 1]) continue;
    cols[x] = diag_pos[x + y] = diag_neg[x - y + n - 1] = 1;
    board[y][x] = 1;
    search(n, y + 1);
    board[y][x] = 0;
    cols[x] = diag_pos[x + y] = diag_neg[x - y + n - 1] = 0;
  }
}

int main() {
  search(4, 0);

  return 0;
}
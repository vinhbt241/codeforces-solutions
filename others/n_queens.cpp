#include <bits/stdc++.h>

using namespace std;

const int N = 5;
const int D = 8;

int cols[N], diag_pos[D], diag_neg[D];
int board[N][N];

void search(int y = 0) {
  if(y == N) {
    cout << "=SOLUTION=" << "\n";
    for(int i = 0; i < N; i++) {
      for(int j = 0; j < N; j++) {
        cout << board[i][j] << " ";
      }
      cout << "\n";
    }
    cout << "==========" << "\n";
    return;
  }

  for(int x = 0; x < N; x++) {
    if(cols[x] || diag_pos[x + y] || diag_neg[x - y + N - 1]) continue;
    cols[x] = diag_pos[x + y] = diag_neg[x - y + N - 1] = 1;
    board[y][x] = 1;
    search(y + 1);
    board[y][x] = 0;
    cols[x] = diag_pos[x + y] = diag_neg[x - y + N - 1] = 0;
  }
}

int main() {
  search(0);
  return 0;
}
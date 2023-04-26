#include <bits/stdc++.h>

using namespace std;

// First way - Dynamic programming
int solve(int x, vector<int> coins, vector<bool> ready, vector<int> value) {
  if(x < 0) return 9999;
  if(x == 0) return 0;
  if(ready[x]) return value[x];
  int best = 9999;
  for(int c : coins) {
    best = min(best, solve(x - c, coins, ready, value) + 1);
  }
  ready[x] = true;
  value[x] = best;
  return best;
}

// Second way - Iteratively loop
// int solveI(int n, vector<int> coins) {
//   int value[n + 1];
//   value[0] = 0;
//   for(int x = 1; x <= n; x++) {
//     for(auto c : coins) {
//       if((x - c) >= 0) {
//         value[x] = min(value[x], value[x - c] + 1);
//       }
//     }
//   }
//   return value[n];
// }

int main() {
  int n = 11;
  vector<int> coins = {1, 3, 4};
  vector<bool> ready(n, false);
  vector<int> value(n, 0);

  int minimum_coins = solve(n, coins, ready, value);
  // int minimum_coins = solveI(10, coins);

  cout << minimum_coins << "\n";

  return 0;
}
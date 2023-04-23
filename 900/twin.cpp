#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

int main() {
  vector<int> coins;
  int n;
  cin >> n;
  int coin;
  int sum = 0;
  for(int i = 0; i < n; i++) {
    cin >> coin;
    coins.push_back(coin);
    sum += coin;
  }

  sort(coins.begin(), coins.end(), greater<int>());

  int cs = 0;
  int num = 0;
  for(int cn : coins) {
    cs += cn;
    num++;

    if(cs > (sum / 2)) {
      cout << num << endl;
      return 0;
    }
  }

  return 0;
}
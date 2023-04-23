#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

int main() {
  string line;
  getline(cin, line);
  vector<int> nums;
  int n;

  for(char c : line) {
    if(c != '+') {
      n = c - '0';
      nums.push_back(n);
    }
  }

  sort(nums.begin(), nums.end());

  decltype(nums.size()) i = 0;

  for(; i < nums.size() - 1; i++) {
    cout << nums[i] << '+';
  }
  cout << nums[i] << endl;;
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

#define ll long long

void generatePermutations(int n,vector<bool> chosen, vector<int> permutation) {
  if(permutation.size() == n)  {
    cout << "Permutation: {";
    for(auto i = permutation.begin(); i != permutation.end(); i++) {
      if(i + 1 == permutation.end()) {
        cout << *i;
      } else {
        cout << *i << ", ";
      }
    }
    cout << "}" << "\n";
  } else {
    for(int i = 0; i < n; i++) {
      if(chosen[i]) continue;
      chosen[i] = true;
      permutation.push_back(i);
      generatePermutations(n, chosen, permutation);
      chosen[i] = false;
      permutation.pop_back();
    }
  }
}

int main() {
  vector<bool> chosen(3, false);
  vector<int> permutation;
  generatePermutations(3, chosen, permutation);
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

#define ll long long

void generate_subsets(int k, int n, vector<int> subset) {
  if(k == n) {
    cout << "Subset: {";
    for(auto i = subset.begin(); i != subset.end(); i++) {
      if(i + 1 == subset.end()) {
        cout << *i;
      } else {
        cout << *i << ", ";
      }
    }
    cout << "}" << "\n";
  } else {
    generate_subsets(k + 1, n, subset);
    subset.push_back(k);
    generate_subsets(k + 1, n, subset);
    subset.pop_back();
  }
}

int main() {
  vector<int> s;
  generate_subsets(0, 3, s);
  return 0;
}
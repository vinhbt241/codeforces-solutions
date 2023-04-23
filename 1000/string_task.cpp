#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#define ll long long

char vowels[] = {'a', 'i', 'u', 'e', 'o', 'y'};

bool isVowel(char c) {
  for(char v : vowels) {
    if(c == v) {
      return true;
    }
  }
  return false;
}

int main() {
  string line;
  cin >> line;
  for(char c : line) {
    c = tolower(c);
    if(!isVowel(c)) {
      cout << '.' << c;
    }
  }
  return 0;
}
#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

int main() {
  string word;
  cin >> word;
  word[0] = toupper(word[0]);
  cout << word;
  return 0;
}
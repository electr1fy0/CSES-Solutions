#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  // given string of chars A, C, G, T
  // to find: longest contiguous repetition of chars
  // subtring problem

  int max = 1;
  int count = 1;
  string word;
  char prevc;
  cin >> word;

  for (int i = 1; i < word.size(); ++i) {
    if (word[i] == word[i - 1]) {
      ++count;
      if (count > max)
        max = count;
    } else
      count = 1;
  }

  cout << max;
  return 0;
}

#include <iostream>

using namespace std;

int main() {

  int max = 1, count = 1;
  string word;

  cin >> word;
  for (int i = 1; i < word.size(); ++i) {
    if (word[i] == word[i - 1]) {
      ++count;
      if (count > max) max = count;
    } else
      count = 1;
  }

  cout << max;
  return 0;
}

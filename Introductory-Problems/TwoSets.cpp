#include <iostream>
#include <vector>

using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> left;
  vector<int> right;

  int cycle1 = 0;

  while (n > 0) {
    if (cycle1 == 0) {
      right.push_back(n);
      n--;
      if (n != 0)

      left.push_back(n);
        n--;
      cycle1 = 1;
    } else if (cycle1 == 1) {
      left.push_back(n);
      n--;
      if (n != 0)

      right.push_back(n);
        n--;
      cycle1 = 0;
    }
  }

  int sumleft = 0, sumright = 0;
  int countleft = 0, countright = 0;


  for (int i : left) {
    sumleft += i;
    ++countleft;
  }
  for (int i : right) {
    sumright += i;
    ++countright;
  }

  if (sumleft != sumright) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
    cout << countleft << '\n';
    for (int i : left) {
      cout << i << " ";
    }
    cout << '\n';

    cout << countright << '\n';
    for (int i : right) {

      cout << i << " ";
    }
  }
  return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
  // divide 1 to n into two sets of equal sum, print count

  // 8: 2 3 6 7 | 8 4 5 1    8 5 4 1 | 7 6 3 2
  // 7: 1 2 4 7 | 3 5 6
  // 6: 6 3 2 | 5 4 3
  // 5: 1 2 4 | 3 5
  // 4: 1 4 | 2 3

  // logic: if difference of two sides is 1, fails
  // alternating + 1 on sides

  int n;
  cin >> n;

  vector<int> left;
  vector<int> right;

  int cycle1 = 0;

  // left.push_back(n);

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

#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin >> t;

  while (t--) {
    int n;
    std::cin >> n;

    std::vector<int> w(n);
    for (int i = 0; i < n; i++)
      std::cin >> w[i];

    if (n % 2 != 0) {
      std::cout << "no\n";
      continue;
    }

    int ub = 1e9;
    int lb = -1e9;

    for (int i = 0; i < n; i++) {
      if (i % 2 == 0)
        ub = std::min(ub, w[i] - 1);
      else
        lb = std::max(lb, w[i] + 1);
    }

    if (ub >= lb)
      std::cout << "yes\n";
    else
      std::cout << "no\n";
  }

  return 0;
}

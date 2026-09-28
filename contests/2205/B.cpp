#include <ios>
#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin >> t;

  while (t--) {
    int n;
    std::cin >> n;

    int x = 1;
    int tmp = n;
    for (int i = 2; i * i <= n; i++) {
      if (tmp % i == 0) {
        x *= i;
        while (tmp % i == 0)
          tmp /= i;
      }
    }

    if (tmp > 1)
      x *= tmp;

    std::cout << x << '\n';
  }

  return 0;
}

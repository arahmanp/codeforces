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
    int n, h, l;
    std::cin >> n >> h >> l;

    int max_val = std::max(h, l);

    std::vector<int> a;
    for (int i = 0; i < n; i++) {
      int x;
      std::cin >> x;

      if (x <= max_val)
        a.push_back(x);
    }

    std::sort(a.begin(), a.end());

    if (a.size() % 2 != 0)
      a.pop_back();

    if (a.empty()) {
      std::cout << 0 << '\n';
      continue;
    }

    int ans = 0;
    int size = a.size();
    for (int i = 0; i < size / 2; i++) {
      int x = a[i];
      int y = a[size - i - 1];

      if ((x >= 1 && x <= h && y >= 1 && y <= l) ||
          (x >= 1 && x <= l && y >= 1 && y <= h))
        ans++;
    }

    std::cout << ans;

    std::cout << '\n';
  }

  return 0;
}

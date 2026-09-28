#include <ios>
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin >> t;

  while (t--) {
    int n;
    std::string s;
    std::cin >> n >> s;

    std::vector<bool> visited(n + 1, false);
    int curr_pos = 1;
    int ans = 0;

    visited[curr_pos] = true;
    ans++;

    for (int i = 0; i < n; i++) {
      if (s[curr_pos - 1] == 'R')
        curr_pos++;
      else if (s[curr_pos - 1] == 'L')
        curr_pos--;

      if (!visited[curr_pos]) {
        ans++;
        visited[curr_pos] = true;
      }
    }

    std::cout << ans << '\n';
  }

  return 0;
}

#include <ios>
#include <iostream>
#include <vector>

std::vector<int> genPrimes(int n) {
  std::vector<int> res;
  std::vector<bool> eliminated(n + 1, false);
  for (int i = 2; i <= n; i++) {
    if (!eliminated[i]) {
      res.push_back(i);
      for (long long j = (long long)i * i; j <= n; j += i)
        eliminated[j] = true;
    }
  }

  return res;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  std::vector<int> primes = genPrimes(200000);

  int t;
  std::cin >> t;

  while (t--) {
    int n;
    std::cin >> n;

    std::vector<long long> seq;
    seq.reserve(n);

    seq.push_back(2);
    for (int i = 0; i < n - 1; i++)
      seq.push_back((long long)primes[i] * primes[i + 1]);

    for (auto el : seq)
      std::cout << el << ' ';
    std::cout << '\n';
  }
}
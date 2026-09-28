#include <ios>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    
    while(t--) {
        int n, m;
        std::cin >> n >> m;

        std::vector<int> a(n), b(m);
        for(int i = 0; i < n; i++) std::cin >> a[i];
        for(int i = 0; i < m; i++) std::cin >> b[i];

        int n_useable_block_a = a[n - 1];
        int n_useable_block_b = b[m - 1];

        for(int i = 0; i < n - 1; i++) n_useable_block_a += (a[i] - a[i + 1] + 1);
        for(int i = 0; i < m - 1; i++) n_useable_block_b += (b[i] - b[i + 1] + 1);

        int winner;
        if(n_useable_block_a < n_useable_block_b) winner = 2;
        else winner = 1;

        std::cout << winner << '\n';
    }

    return 0;
}
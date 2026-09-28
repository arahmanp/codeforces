#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    std::cin >> t;

    while(t--) {
        int n;
        std::cin >> n;

        std::vector<int> a(n);
        for(int i = 0; i < n; i++) std::cin >> a[i];

        int n_odd, n_div4, n_div2;
        n_odd = n_div4 = n_div2 = 0;

        for(auto el : a) {
            if(el % 2 == 0) {
                if(el % 4 == 0) n_div4++;
                else n_div2++;
            } else n_odd++;
        }

        int res = std::max({n_div2, n_div4, n_odd});

        std::cout << res << '\n';
    }

    return 0;
}
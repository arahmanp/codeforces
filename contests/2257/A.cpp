#include <cctype>
#include <ios>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;

    while(t--) {
        int n, m;
        std::cin >> n >> m;

        std::vector<std::string> a(n), w(m);
        for(int i = 0; i < n; i++) std::cin >> a[i];
        for(int i = 0; i < m; i++) std::cin >> w[i];

        std::unordered_set<char> first_letter;
        for(auto s : a) first_letter.insert(toupper(s[0]));

        bool is_correct = true;
        for(auto s : w) {
            for(auto c : s) {
                if(!first_letter.contains(c)) is_correct = false;
            }
        }

        std::cout << (is_correct ? "YES" : "NO");

        std::cout << '\n';
    }
}
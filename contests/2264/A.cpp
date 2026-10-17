#include <algorithm>
#include <ios>
#include <iostream>
#include <utility>
#include <vector>

bool isSortedAscending(const std::vector<int> &v) {
    int n = v.size();
    for(int i = 0; i < n - 1; i++) {
        if(v[i] > v[i + 1]) return false;
    }
    return true;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;

    while(t--) {
        int n;
        std::cin >> n;

        std::vector<int> p(n);
        for(int i = 0; i < n; i++) std::cin >> p[i];

        if(isSortedAscending(p)) {
            std::cout << "yes\n";
            continue;
        }

        std::vector<int> pTarget = p;
        std::sort(pTarget.begin(), pTarget.end());

        std::vector<int> chosenIdx;
        for(int i = 0; i < n; i++) {
            if(p[i] != pTarget[i]) chosenIdx.push_back(i);
        }

        int m = chosenIdx.size();
        for(int j = 0; j < m / 2; j++) {
            std::swap(p[chosenIdx[j]], p[chosenIdx[m - j - 1]]);
        }

        if(p == pTarget) std::cout << "yes\n";
        else std::cout << "no\n";
    }
}
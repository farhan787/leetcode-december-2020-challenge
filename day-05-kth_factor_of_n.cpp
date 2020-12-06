// Problem Link: https://leetcode.com/problems/the-kth-factor-of-n/

#include <iostream>
#include <vector>

using namespace std;

int kthFactor(int n, int k) {
    vector<int> factors;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) factors.push_back(i);
    }
    return (int)factors.size() >= k ? factors[k - 1] : -1;
}

int main() {
}

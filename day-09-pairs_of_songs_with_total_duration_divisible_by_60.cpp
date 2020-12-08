// Problem Link: https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int numPairsDivisibleBy60(vector<int>& time) {
    int ans = 0;
    unordered_map<int, int> counts;
    for (int t : time) {
        int remainder = t % 60;
        ans += counts[60 - remainder] + counts[-remainder];
        counts[remainder] += 1;
    }
    return ans;
}

int main() {
}

// Problem Link: https://leetcode.com/problems/can-place-flowers/

#include <iostream>
#include <vector>

using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    const int fb_size = flowerbed.size();
    for (int i = 0; i < fb_size; i++) {
        if (n == 0) return true;
        if (flowerbed[i] == 1) continue;
        if ((i == 0 || flowerbed[i - 1] != 1) && (i == fb_size - 1 || flowerbed[i + 1] != 1)) {
            --n;
            flowerbed[i] = 1;
        }
    }
    return n == 0;
}

int main() {
}

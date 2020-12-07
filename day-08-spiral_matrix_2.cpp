// Problem Link: https://leetcode.com/problems/spiral-matrix-ii/

#include <iostream>
#include <vector>

using namespace std;

void FillLayer(vector<vector<int>>& matrix, int layer, int& value) {
    const int n = matrix.size();
    const int start = layer;
    const int end = n - layer - 1;

    // fill top row
    for (int col = start; col <= end; col++) {
        matrix[start][col] = value;
        ++value;
    }

    // fill right col
    for (int row = start + 1; row <= end; row++) {
        matrix[row][end] = value;
        ++value;
    }

    // fill bottom row
    for (int col = end - 1; col >= start; col--) {
        matrix[end][col] = value;
        ++value;
    }

    // fill left col
    for (int row = end - 1; row > start; row--) {
        matrix[row][start] = value;
        ++value;
    }
}

vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, 0));

    const int layers = n / 2;
    int value = 1;
    for (int layer = 0; layer <= layers; layer++) {
        FillLayer(matrix, layer, value);
    }
    return matrix;
}

int main() {
}

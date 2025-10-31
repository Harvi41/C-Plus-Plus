void spiralPrint(vector<vector<int>>& matrix) {
    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) cout << matrix[top][i] << " ";
        top++;
        for (int i = top; i <= bottom; i++) cout << matrix[i][right] << " ";
        right--;
        if (top <= bottom)
            for (int i = right; i >= left; i--) cout << matrix[bottom][i] << " ";
        bottom--;
        if (left <= right)
            for (int i = bottom; i >= top; i--) cout << matrix[i][left] << " ";
        left++;
    }
}

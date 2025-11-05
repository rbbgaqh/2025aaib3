class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        int top = 0, bottom = M - 1, left = 0, right = N - 1;
        vector<int> ans;

        while (top <= bottom && left <= right) {
            // 遍歷上邊
            for (int j = left; j <= right; j++) {
                ans.push_back(matrix[top][j]);
            }
            top++; // 更新 top
            if (top > bottom) break; // 若超過邊界，跳出循環

            // 遍歷右邊
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--; // 更新 right
            if (left > right) break; // 若超過邊界，跳出循環

            // 遍歷下邊
            for (int j = right; j >= left; j--) {
                ans.push_back(matrix[bottom][j]);
            }
            bottom--; // 更新 bottom
            if (top > bottom) break; // 若超過邊界，跳出循環

            // 遍歷左邊
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++; // 更新 left
            if (left > right) break; // 若超過邊界，跳出循環
        }

        return ans;
    }
};

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size();
        int col = mat[0].size();
        if (row * col != r * c) return mat;
        
        vector<vector<int>> result;
        int index = c;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (index == c) {
                    result.push_back({});
                    index = 0;
                }
                result[result.size() - 1].push_back(mat[i][j]);
                index += 1;
            }
        }
        return result;
    }
};
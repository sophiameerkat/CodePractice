#73. Set Matrix Zeroes
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool r = false;
        bool c = false;
        for (int i = 0; i < matrix[0].size(); i++) {
            if (matrix[0][i] == 0) {
                r = true;
                break;
            }
        }
        for (int i = 0; i < matrix.size(); i++) {
            if (matrix[i][0] == 0) {
                c = true;
                break;
            }
        }
        for (int i = 1; i < matrix.size(); i++) {
            for (int j = 1; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {   
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        for (int i = 1; i < matrix.size(); i++) {
            for (int j = 1; j < matrix[0].size(); j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
        if (r == true) {
            for (int i = 0; i < matrix[0].size(); i++)
                matrix[0][i] = 0;
        }
        if (c == true) {
            for (int i = 0; i < matrix.size(); i++)
                matrix[i][0] = 0;
        }
    }
};

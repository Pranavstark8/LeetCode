class Solution {
public:
    int countNegatives(vector<vector<int>>& mat) {

        int rows = mat.size();
        int cols = mat[0].size();

        int r = rows - 1;   // start from bottom-left
        int c = 0;

        int negativeCount = 0;

        while (r >= 0 && c < cols) {

            if (mat[r][c] < 0) {
                negativeCount += (cols - c);
                r--;   // move up
            } else {
                c++;   // move right
            }
        }

        return negativeCount;
    }
};

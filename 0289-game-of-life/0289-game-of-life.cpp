class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();

        vector<vector<int>> result(n, vector<int>(m, 0));

        int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int sum = 0;
                for (int dir = 0; dir < 8; dir++) {
                    int x = i + dx[dir];
                    int y = j + dy[dir];
                    if (x >= 0 && x < n && y >= 0 && y < m) {
                        sum += board[x][y];
                    }
                }
                if ((sum == 2 || sum == 3) && board[i][j] == 1) {
                    result[i][j] = 1;
                } else if (sum == 3 && board[i][j] == 0) {
                    result[i][j] = 1;
                }
            }
        }
        board = result;
    }
};
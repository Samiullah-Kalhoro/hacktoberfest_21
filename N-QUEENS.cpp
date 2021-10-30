/*

Problem Link - https://leetcode.com/problems/n-queens/
The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.

 

Example 1:

https://assets.leetcode.com/uploads/2020/11/13/queens.jpg


Input: n = 4
Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above
Example 2:

Input: n = 1
Output: [["Q"]]
 

Constraints:

1 <= n <= 9
*/

class Solution {
public:
    
    char board[11][11];
    vector<vector<string>> v;
    
    bool isPossible(int n, int row, int i){
        // Check up
        for(int k=row-1;k>=0;k--){
            if(board[k][i] == 'Q'){
                return false;
            }            
        }
        // Up Left Diagonal
        for(int k=row-1,t = i-1;k>=0 && t>=0;k--,t--){
            if(board[k][t] == 'Q'){
                return false;
            }            
        }
        
        // Up Right Diagonal
        for(int k=row-1,t = i+1;k>=0 && t<n;k--,t++){
            if(board[k][t] == 'Q'){
                return false;
            }            
        }
        return true;
    }
    
    void NQueen(int n, int curr_row){
        vector<string> temp;
        if(curr_row == n){
            for(int i=0;i<n;i++){
                string str;
                for(int j=0;j<n;j++){
                    str+=board[i][j];
                }
                temp.push_back(str);
            }
            v.push_back(temp);
            return;
        }
        
        for(int i=0;i<n;i++){
            if(isPossible(n,curr_row,i)){
                board[curr_row][i] = 'Q';
                NQueen(n,curr_row+1);
                board[curr_row][i] = '.';
            }
        }
    }
    
    void NQueens(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                board[i][j] = '.';
            }
        }
        NQueen(n,0);
    }
    vector<vector<string>> solveNQueens(int n) {
        NQueens(n);
        return v;    
    }
};

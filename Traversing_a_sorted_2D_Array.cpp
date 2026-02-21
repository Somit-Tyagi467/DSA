#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int total_rows=matrix.size();
        int curr_row=0;
        int curr_col=matrix[0].size()-1;

        while(curr_row<total_rows && curr_col>=0){
            if(matrix[curr_row][curr_col] == target){
                return true;
            }
            else if(target < matrix[curr_row][curr_col]){
                curr_col--;
            }
            else if(target > matrix[curr_row][curr_col]){
                curr_row++;
            }
        }
        return false;
    }
};
int main() {
    Solution obj;

    vector<vector<int>> matrix = {
        {1,4,7},
        {2,5,8},
        {3,6,9}
    };
    int target = 5;
    cout << obj.searchMatrix(matrix, target);

    return 0;
}
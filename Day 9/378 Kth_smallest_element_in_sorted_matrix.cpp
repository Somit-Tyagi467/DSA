class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector <int> arr(row*col,-1);
        int count=0;
        for(int i=0;i<row;i++){
            for(int j =0;j<col;j++){
                arr[count]=matrix[i][j];
                count++;
            }
        }
        sort(arr.begin(),arr.end());
        return arr[k-1];
    };
};
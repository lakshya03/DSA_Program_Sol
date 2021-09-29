class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m= matrix.size();
        int i=0;
        int n=matrix[0].size()-1;
        while(i<m && n>=0)
        {
            if(matrix[i][n]==target)
                return true;
            else if(matrix[i][n]>target)
                n--;
            else
                i++;
        }
        return false;
    }
};
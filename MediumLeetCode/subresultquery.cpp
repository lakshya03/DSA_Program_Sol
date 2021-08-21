class SubrectangleQueries {
public:
    vector<vector<int>> res;
    vector<vector<int>>up;
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        swap(res,rectangle);
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        up.push_back({row1,col1,row2,col2,newValue});
    }
    
    int getValue(int row, int col) {
        for(int i=up.size()-1;i>=0;i--)
        {
            if(up[i][0]<=row && up[i][1]<=col && row<=up[i][2] && col<=up[i][3])
                return up[i][4];
        }
        return res[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */
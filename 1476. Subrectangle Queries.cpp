class SubrectangleQueries {
public:
    vector<vector<int>>rec;
    SubrectangleQueries(vector<vector<int>>& r) {
        int n=r.size();
        for(int i=0;i<n;i++)
            rec.push_back(r[i]);
    }
    
    void updateSubrectangle(int r1, int c1, int r2, int c2, int newValue) {
        for(int i=r1;i<=r2;i++)
        for(int j=c1;j<=c2;j++)
            rec[i][j]=newValue;
        
    }
    
    int getValue(int row, int col) {
        return rec[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */
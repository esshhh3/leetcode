class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

      int maxi = INT_MIN;
      int x;
      int y;
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
             if(mat[i][j]>maxi){
                maxi = mat[i][j];
                 x = i;
                 y = j;
             }
            }
        }
       return {x,y};
    }
};
class Solution {
public:
  int diagonalSum(vector<vector<int>>& mat) {
    int diagonalSum=0;
    int n=mat.size();
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
      {
        if(i==j){

          diagonalSum+=mat[i][j];
        }
        else if(i==n-j-1){
          diagonalSum+=mat[i][j];
        }
      }
    }
    return diagonalSum;
  }
};

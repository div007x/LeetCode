class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0;i<r;i++){
            
            for(int j=i;j<c;j++){
               int temp=matrix[i][j]; 
               matrix[i][j]=matrix[j][i];
               matrix[j][i]=temp;
                   
            }

        }

        for(int i=0;i<r;i++){
                int left=0;
                int right=r-1;
           
                while(left<right){
                    int temp= matrix[i][left];
                    matrix[i][left]=matrix[i][right];
                    matrix[i][right]=temp;
                    left++;
                    right--;

                }
            
        }
        
        
    }
};
///week09-2.cpp
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int M=matrix.size(),N=matrix[0].size();
        vector<int> markI(M),markJ(N);
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(matrix[i][j]==0){
                    markI[i]=true;
                    markJ[j]=true;
                }
            }
        }
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(markI[i]==true || markJ[j]==true)matrix[i][j]=0;
            }
        }
    }
};

void dfs(int i, int j , int& mxi, int& mxj, auto& mat){
        int m=mat.size(), n=mat[0].size();
        if(i<0 || j<0 || i==m || j==n || mat[i][j]==0) return;
        mxi=max(mxi, i), mxj=max(mxj, j);
        mat[i][j]=0;
        int u[4]={0, 0, -1, 1};
        int v[4]={1, -1, 0, 0};
        for(int k=0;k<4;k++){
            int di=u[k], dj=v[k];
            dfs(i+di, j+ dj, mxi, mxj, mat);
        }
    }

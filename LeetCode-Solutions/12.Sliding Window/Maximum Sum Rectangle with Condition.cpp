int solve(vector<vector<int>>& matrix, int k) {

    int row=matrix.size();
    int col=matrix[0].size();

    //find out the prefix sum
    //row wise

    for(int i=0;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            matrix[i][j]+=matrix[i][j-1];
        }
    }

    int global_sum=INT_MIN;
    int sum=0;
    
    for(int i=0;i<col;i++)
    {
        
        for(int j=i;j<col;j++)
        {
         int local_sum=0;

         set<int> s={0};

         for(int l=0;l<row;l++)
         {
             local_sum+=matrix[l][j];

             if(i>0)
                local_sum-=matrix[l][i-1];

            auto lb = s.lower_bound(local_sum-k);
                if(lb != s.end())
                        global_sum = max(global_sum, local_sum-*lb);
                    s.insert(local_sum);
         }

        }        
    }

    return global_sum;
}
class Solution {
public:
    void mark_island(vector<vector<char>>& grid,int i,int j,int row,int col)
    {
        if(i<0 || j<0 || i>=row || j>=col || grid[i][j]!='1' )
        {
            return ;
        }
        
        grid[i][j]='2';//marked the as visited
        mark_island(grid,i,j+1,row,col);
        mark_island(grid,i,j-1,row,col);
        mark_island(grid,i+1,j,row,col);
        mark_island(grid,i-1,j,row,col);
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        
        if(row==0) return 0;
        
        int col=grid[0].size();
        int num_of_island=0;
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]=='1')
                    num_of_island+=1;
                mark_island(grid,i,j,row,col);
            }
            
        }
        
        return num_of_island;
    }
};
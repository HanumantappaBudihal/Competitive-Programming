class Solution {
public:

    vector<int> generate_level(vector<int> level_data,int n)
    {
        vector<int> result;
        result.push_back(level_data[0]);

        for(int i=1;i<=(n-2);i++)
        {           
            int end=level_data[i-1]+level_data[i];
            result.push_back(end);
        }

        result.push_back(level_data[0]);

        return result;
    }

    vector<vector<int>> generate(int n) {
       vector<vector<int>> result;    
       vector<int> first_level;
       first_level.push_back(1);
       result.push_back(first_level);

       for(int i=2;i<= n;i++)
       {       
           first_level=generate_level(first_level,i);
           result.push_back(first_level);
       }        

       return result; 
    }
};
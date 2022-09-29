class Solution{
public:
    unordered_map<string, vector<string>> m;
    
    void combine(vector<string> &v, string w){
        for(int i = 0;i < v.size();i++){
            v[i] += " "+w;
        }
    }
    
    vector<string> cal(string s, unordered_set<string> &mp){
        if(m.find(s) != m.end()) 
            return m[s];
        vector<string> result;
        if(mp.find(s) != mp.end()) 
            result.push_back(s);
        for(int i = 1;i < s.size();i++){
            string rem = s.substr(i);
            if(mp.find(rem) != mp.end()){
                vector<string> v = cal(s.substr(0,i), mp);
                combine(v, rem);
                result.insert(result.end(), v.begin(), v.end());
            }
        }
        m[s] = result;
        return result;
    }
    
    vector<string> wordBreak(int n, vector<string>& dict, string s) 
    {
        unordered_set<string> mp;
        for(int i = 0;i < n;i++)
            mp.insert(dict[i]);
        vector<string> ans = cal(s, mp);
        return ans;
    }
};
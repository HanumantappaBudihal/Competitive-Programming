int Solution::solve(vector<string> &A) {
    unordered_set<char> chars;
    
    for(auto item : A)
    {
        for(auto letter : item)
        {
            chars.insert(letter);
            
            if(chars.size()==26)
                return true;
        }
    }
    
    return false;
}

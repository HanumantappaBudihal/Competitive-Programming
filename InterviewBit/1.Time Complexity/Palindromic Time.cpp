
int Solution::solve(string A) {
    string str=A.substr(3,2);
    int min=stoi(str);
    str=A.substr(0,2);
    int hr=stoi(str);
    int ans=0;
    
    
    while(true){
        if(hr/10==min%10&&min/10==hr%10)break;
        min++;
        ans++;
        if(min%60==0)
            hr++;
        
        min=min%60;
        if(hr%24==0)
            hr=hr%24;
    }
    return ans;
    
    
}


class Solution {
    public int solve(string A) {
        string[] words = A.Trim().Split(' ');
int count=0;
foreach (var word in words)
{
    if(word.Trim()!="")
        count=count+1;
}
return count;
    }
}

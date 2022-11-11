#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void search(string pattern, string text)
{
    int patternLength=pattern.length();
    int textLength=text.length();

    for(int i=0;i<textLength-patternLength;i++)
    {
        int j=0;
        for(;j<textLength;j++)
        {
            if(text[i+j]!=pattern[j])
            break;

            if(j==patternLength-1)
                cout<<"Pattern found at index : "<<i<<endl;
        }
    }
}

int main()
{
    //char txt[]="AABAACAADABAAAABAA";
    //char pat[]="AABA";
    
    string text;
    cin>>text;
    string pattern;
    cin>>pattern;
    search(pattern,text);

    return 0;
}
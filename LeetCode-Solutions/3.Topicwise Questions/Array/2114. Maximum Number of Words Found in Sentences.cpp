#include<vector>
#include<string>
#include<stdlib.h>
#include<algorithm>

using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWordCount=0;
        for(auto item : sentences)
        {
            int wordCount=0;
            for(auto letter : item)
            {
                if(letter==' ')
                {
                    wordCount+=1;
                }                
            }
            
            wordCount+=1;
            if(wordCount>maxWordCount)
                maxWordCount=wordCount;
        }   

        return maxWordCount;
    }

    // Using the count function
    int mostWordsFound_1(vector<string>& sentences) 
    {
        int maxCount=0;

        for(auto item : sentences)
        {
            int words=count(item.begin(),item.end(),' ')+1;

            maxCount=max(words,maxCount);
        }

        return maxCount;
    }
};
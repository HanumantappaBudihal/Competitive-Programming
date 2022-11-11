class Solution {
public:
    int removeDuplicates(vector<int>& numbers) {
       if (numbers.empty() || numbers.size() == 0)
            return 0;

        int indexOne = 0;
        int duplicateIndexer = 0;

        while (duplicateIndexer < numbers.size())
        {
            if (numbers[indexOne] != numbers[duplicateIndexer])
            {
                numbers[++indexOne] = numbers[duplicateIndexer];
            }

            duplicateIndexer++;
        }

        return indexOne + 1;
    }
};
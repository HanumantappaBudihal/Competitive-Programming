
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int leftSide = 1;
        int rightSide = n;

        while (leftSide < rightSide)
        {
            int mid = leftSide + (rightSide - leftSide) / 2;

            if (isBadVersion(mid))
            {
                rightSide = mid;
            }
            else
            {
                leftSide = mid + 1;
            }
        }
        return leftSide;
    }
};
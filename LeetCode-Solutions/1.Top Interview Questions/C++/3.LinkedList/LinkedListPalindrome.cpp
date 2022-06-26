

/************************************************************************************************************
 *  Problem statement : https://leetcode.com/explore/interview/card/top-interview-questions-easy/93/linked-list/553/
 * 
 * //Solution : My approach
 * //Time complexity  : 
 * //Space complexity : 
 * 
 ************************************************************************************************************/

#include <vector>
using namespace std;
//  Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        vector<int> nodeData;

        while (head != NULL)
        {
            nodeData.push_back(head->val);
            head = head->next;
        }

        for (int i = 0; i < nodeData.size(); i++)
        {
            if (nodeData[i] != nodeData[nodeData.size() - i - 1])
                return false;
        }

        return true;
    }
};

//Better approach
class Solution1
{
public:
    bool isPalindrome(ListNode *head)
    {
        ListNode *curr = head;
        ListNode *prev = NULL;
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            ListNode *n = curr->next;
            curr->next = prev;
            prev = curr;
            curr = n;
        }

        if (fast == NULL)
        {
            ListNode *p = prev;
        }
        else
        {
            ListNode *p = prev;
            slow = slow->next;
        }

        while (prev != NULL)
        {
            if (prev->val != slow->val)
            {
                return false;
            }
            prev = prev->next;
            slow = slow->next;
        }
        return true;
    }
};
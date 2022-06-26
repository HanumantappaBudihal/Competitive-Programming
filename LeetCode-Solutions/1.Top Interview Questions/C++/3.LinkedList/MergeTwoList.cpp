
/************************************************************************************************************
 *  Problem statement : https://leetcode.com/explore/featured/card/top-interview-questions-easy/93/linked-list/771/
 * 
 * //Solution : My approach
 * //Time complexity  : 
 * //Space complexity : 
 * 
 ************************************************************************************************************/

#include <iostream>
/**
 * Definition for singly-linked list.
 */
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//My approach
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *listOne, ListNode *listTwo)
    {
        if (listOne == NULL)
            return listTwo;

        if (listTwo == NULL)
            return listOne;

        ListNode *newNodeHead = NULL;
        ListNode *currentNode = NULL;
        ListNode *previosNode = NULL;

        while (listOne != NULL && listTwo != NULL)
        {
            if (listOne->val < listTwo->val)
            {
                currentNode = listOne;
                listOne = listOne->next;
            }
            else
            {
                currentNode = listTwo;
                listTwo = listTwo->next;
            }

            if (newNodeHead == NULL)
            {
                newNodeHead = currentNode;
                previosNode = currentNode;
            }
            else
            {
                previosNode->next = currentNode;
                previosNode = currentNode;
            }
        }

        if (listOne != NULL)
        {
            previosNode->next = listOne;
            previosNode = listOne;
            listOne = listOne->next;
        }

        if (listTwo != NULL)
        {
            previosNode->next = listTwo;
            previosNode = listTwo;
            listTwo = listTwo->next;
        }

        return newNodeHead;
    }
};

//Better approach
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode(), *iter = dummy;
        while (l1 && l2)
        {
            if (l1->val > l2->val)
            {
                iter->next = l2;
                l2 = l2->next;
            }
            else
            {
                iter->next = l1;
                l1 = l1->next;
            }
            iter = iter->next;
        }
        if (l1)
            iter->next = l1;
        if (l2)
            iter->next = l2;
        return dummy->next;
    }
};
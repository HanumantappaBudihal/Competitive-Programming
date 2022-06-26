#include <vector>
#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
#include <string>
#include <ctype.h>
#include <stdio.h>
#include <ctype.h>

using namespace std;

/************************************************************************************************************
 *  Problem statement : https://leetcode.com/explore/interview/card/top-interview-questions-easy/93/linked-list/553/
 * 
 * //Solution : My approach
 * //Time complexity  : 
 * //Space complexity : 
 * 
 ************************************************************************************************************/

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){};
};

//Mu approach and My solution
class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        ListNode *currentNode;
        ListNode *previousNode;

        currentNode = node;
        previousNode = node;

        while (currentNode->next != NULL)
        {
            previousNode = currentNode;
            ListNode *nextNode = currentNode->next;

            currentNode->val = (currentNode->next)->val;
            currentNode = currentNode->next;
        }

        previousNode->next = NULL;
    }
};

//Better approach
class Solution2
{
public:
    void deleteNode(ListNode *node)
    {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

int main()
{
    return 0;
}

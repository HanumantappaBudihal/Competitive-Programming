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
 *  Problem statement :https://leetcode.com/problems/reverse-linked-list/
 *  Submission Details : https://leetcode.com/submissions/detail/559388924/
 * //Solution : My approach
 * //Time complexity  : 
 * //Space complexity : 
 * 
 ************************************************************************************************************/

//Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/************************ Logic *****************************************
 * Initialize three pointers prev as NULL, curr as head and next as NULL.
    Iterate through the linked list. In loop, do following. 
        // Before changing next of current, 
        // store next node 
            next = curr->next
         // Now change next of current 
        // This is where actual reversing happens 
            curr->next = prev 
        // Move prev and curr one step forward 
            prev = curr 
             curr = next 
 ************************************************************************/
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {

        ListNode *currentNode = head;
        ListNode *previousNode = NULL;
        ListNode *nextNode = NULL;

        while (currentNode != NULL)
        {

            nextNode = currentNode->next;
            currentNode->next = previousNode;

            previousNode = currentNode;
            currentNode = nextNode;
        }

        head = previousNode;

        return head;
    }
};

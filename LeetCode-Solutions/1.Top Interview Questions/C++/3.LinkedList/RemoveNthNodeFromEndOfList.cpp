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
 *  Problem statement :https://leetcode.com/explore/interview/card/top-interview-questions-easy/93/linked-list/603/
 *  Submission Details : https://leetcode.com/submissions/detail/559363627/?from=explore&item_id=603
 * //Solution : My approach
 * //Time complexity  : 
 * //Space complexity : 
 * 
 ************************************************************************************************************/

//Definition for singly-linked list.
/**
 * Definition for singly-linked list.
 *  */
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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *deletePointer = head;
        ListNode *iteratorPointer = head;

        while (iteratorPointer->next != NULL)
        {
            if (n != 0) // Crteate the window here
                n--;
            else
                deletePointer = deletePointer->next; // Move the window till last

            iteratorPointer = iteratorPointer->next; // This will iterate till end easily
        }

        if (n != 1 && deletePointer->next != NULL)
            deletePointer->next = deletePointer->next->next; // delete the node by changing the pointer of the node
        else if (n == 1)
            head = head->next; // To handle the edge case

        return head;
    }
};

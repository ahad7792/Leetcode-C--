#include<bits/stdc++.h>
using namespace std;


 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* newList = new ListNode() ;
        ListNode* head = newList; 
        
        if(list1==NULL)
           {
                return list2;
           }
        if(list2==NULL)
           {
                return list1;
           }
        
        while(list1!=NULL && list2!=NULL)
        {
            if(list1->val <= list2->val)
            {
                newList->next = list1;
                newList=list1;
                list1=list1->next;
            }
            else
            {
                newList->next = list2;
                newList=list2;
                list2=list2->next;
            }
        }
        if(list1!=NULL)
        {
            newList->next = list1;

        }
        if(list2!=NULL)
        {
            newList->next=list2;
        }

        return head->next;
    }
};
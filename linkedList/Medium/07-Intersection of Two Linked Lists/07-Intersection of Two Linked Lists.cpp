/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    int length1=1;
    int length2=1;
    ListNode* temp1=headA;
    ListNode* temp2= headB;
    ListNode* t1=headA;
    ListNode* t2=headB;
    if(headA->next==nullptr && headB->next==nullptr && headA==headB)
    return headA;
    while(temp1->next!=nullptr)
    {
        length1++;
        temp1=temp1->next;
    }
    cout << length1 << " ";
    while(temp2->next!=nullptr)
    {
        length2++;
        temp2=temp2->next;
    }
    cout << length2 << " ";
    int d= (length1-length2);
    if(d>0){
        while (d > 0) {
          d--;
          t1 = t1->next;
        }
        cout << t1->val<< " "; 
    } else
    {
        d= d*-1;
        while(d>0)
        {
            d--;
            t2=t2->next;
        }
        cout << t2->val<< " ";
    }
    if(t1==t2)
    return t1;
    while(t1->next!=nullptr && t2->next!=nullptr)
    {
        if(t1==t2)
        {
            return t1;
        }
        t1 = t1->next;
        t2=t2->next;
    }
    if(t1->next==nullptr && t2->next==nullptr && t1==t2)
    return t1;
    return NULL;
    }
};
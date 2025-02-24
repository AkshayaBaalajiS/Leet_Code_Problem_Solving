/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * temp  = list1;
        if(list1!=NULL)
        {
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=list2;
            int tmep = 0;
            for(ListNode * temp_temp  = list1 ; temp_temp->next!=NULL;temp_temp=temp_temp->next )
            {
                for(ListNode * tt = temp_temp ; tt!=NULL ;tt=tt->next)
                {
                    if(temp_temp->val > tt->val){
                        tmep = temp_temp->val;
                         temp_temp->val=tt->val;
                         tt->val=tmep;
                    }
                }
            }
        }
        else
        {
            return list2;
        }

        return list1;
    }
};
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        cout << l1->val << endl;
        // cout << l1->next << endl;
        
        ListNode * head ;
        int count =0;
        bool flag =false;
        for(;l1->next !=nullptr || l2->next!=nullptr;)
        {   
            for(;l1->val || l2->val ;)
            {
                if(!flag)
                {
                    int sum = l1->val |+ l2->val ;
                    if(sum>=10)
                    {
                        flag=true;
                        sum=sum/10;
                        int rem = 0;
                        rem = sum%10 ;                   
                        if(count==0)
                        {
                            head=new ListNode(rem, nullptr);
                            ++count;
                        }
                        else{
                            ListNode * new_node =new ListNode(rem, nullptr);
                            head->next=new_node;
                            ++count;
                        }   
                    }  
                    else{
                        int rem = 0;
                        rem = sum%10 ;
                        if(count==0)
                        {
                            head=new ListNode(rem, nullptr);
                            ++count;
                        }
                        else{
                            ListNode * new_node =new ListNode(rem, nullptr);
                            head->next=new_node;
                            ++count;
                        }
                    }
                }
                else
                {
                    int sum = l1->val |+ l2->val +1;
                    if(sum>=10)
                    {
                        flag=true;
                        sum=sum/10;
                        int rem = 0;
                        rem = sum%10 ;                   
                        if(count==0)
                        {
                            head=new ListNode(rem, nullptr);
                            ++count;
                        }
                        else{
                            ListNode * new_node =new ListNode(rem, nullptr);
                            head->next=new_node;
                            ++count;
                        }   
                    }  
                    else{
                        flag=false;
                        int rem = 0;
                        rem = sum%10 ;
                        if(count==0)
                        {
                            head=new ListNode(rem, nullptr);
                            ++count;
                        }
                        else{
                            ListNode * new_node =new ListNode(rem, nullptr);
                            head->next=new_node;
                            ++count;
                        }
                    }
                }
                if(l1->next!=nullptr)
                {
                    l1=l1->next;
                }
                if( l2->next!=nullptr )
                {
                    l2-l2->next;
                }

            }
        }   
        return head;
    }
};

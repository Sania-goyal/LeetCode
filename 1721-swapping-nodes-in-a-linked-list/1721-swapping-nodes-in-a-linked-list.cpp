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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*temp = head;
        vector<int>v;
        v.push_back(temp->val);
        while(temp->next!=NULL)
        {
            temp= temp->next;
            v.push_back(temp->val);
        }
        int t= v[k-1];
        v[k-1] = v[v.size()-k];
        v[v.size()-k] = t;
       ListNode * tem = head;
       int i= 0;
       while(tem!=NULL)
       {
         tem->val = v[i];
         tem = tem->next;
         i++;
       }
       return head;
    }
};
// identify the  cycyle in the linked list
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include <iostream>
using namespace std;

struct ListNode
{
    int data;
    ListNode* next;
    ListNode():data(0),next(nullptr) {}
    ListNode(int x):data(x),next(nullptr) {}
    ListNode(int x,ListNode* next):data(0),next(next) {}
};

class Solution
{

public:
    ListNode* Insert(ListNode* head, int data)
    {
        ListNode* temp = new ListNode(data);
        if(head==nullptr)
        {
            head = temp;
            return head;
        }
        ListNode* temp2 = head;
        while(temp2->next!= nullptr)
        {
            temp2 = temp2->next;
        }
        temp2->next = temp;
        return head;
    }


    void Print(ListNode* head)
    {
        while(head!= nullptr)
        {
            cout<<head->data<<" ";
            head = head->next;
        }
        cout<<"\n";
    }

    bool hasCycle(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!= nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution sol;

    ListNode* head = nullptr;

    head = sol.Insert(head,7);
    head = sol.Insert(head,2);
    head = sol.Insert(head,3);
    head = sol.Insert(head,6);
    // head = sol.Insert(head,7);
    // head = sol.Insert(head,5);
    // head = sol.Insert(head,6);

    sol.Print(head);

    bool hascycle = sol.hasCycle(head);
    cout<<hascycle;
}

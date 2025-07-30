// Remove linked list elements by value

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

#include<iostream>
using namespace std;

struct ListNode
{
    int data;
    ListNode* next;

    ListNode(): data(0), next(nullptr) {}
    ListNode(int x): data(x), next(nullptr) {}
    ListNode(int x, ListNode* next): data(x), next(next) {}
};

class Solution {
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


    ListNode* removeElements(ListNode* head, int val) 
    {
        while(head != nullptr && head->data == val)
        {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        ListNode* current = head;
        while(head!= nullptr && current->next!= nullptr)
        {
            if (current->next->data == val)
            {
                ListNode* temp = current->next;
                current->next = temp->next;
                delete temp;
            }
            else{
                current = current->next;
            }
        }

        return head;
    }
};

int main()
{
    Solution sol;

    ListNode* head = nullptr;

    head = sol.Insert(head,7);
    head = sol.Insert(head,7);
    head = sol.Insert(head,7);
    head = sol.Insert(head,7);
    // head = sol.Insert(head,7);
    // head = sol.Insert(head,5);
    // head = sol.Insert(head,6);

    sol.Print(head);

    head = sol.removeElements(head,7);

    sol.Print(head);
}
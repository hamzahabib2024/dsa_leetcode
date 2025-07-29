// remove the duplicates from the unsorted linked list

// in this leetcode problem we will delete the duplicates from the linked list

#include <iostream>
using namespace std;

struct ListNode
{
    int data;
    ListNode* next;
    ListNode(): data(0),next(nullptr) {}
    ListNode(int x): data(x),next(nullptr) {}
    ListNode(int x, ListNode* next): data(x),next(next) {}
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

        ListNode* deleteDuplicates(ListNode* head)
        {
            ListNode* temp1 = head;
            while(temp1!= nullptr)
            {
                ListNode* temp2 = temp1;
                while(temp2->next!=nullptr)
                {   
                    if (temp1->data == temp2->next->data)
                    {
                        ListNode* dup = temp2->next;
                        temp2->next = temp2->next->next;
                        delete dup;
                    }
                    else{
                        temp2 = temp2->next;
                    }
                }
                temp1 = temp1->next;
            }
            return head;
        }
};

int main()
{
    Solution sol;

    ListNode* head = nullptr;

    head = sol.Insert(head,2);
    head = sol.Insert(head,4);
    head = sol.Insert(head,6);
    head = sol.Insert(head,4);
    head = sol.Insert(head,5);
    head = sol.Insert(head,5);
    head = sol.Insert(head,6);

    sol.Print(head);

    head = sol.deleteDuplicates(head);

    sol.Print(head);
}
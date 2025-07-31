// find the middle node of the linked list


#include<iostream>
using namespace std;

struct ListNode
{
    int data;
    ListNode* next;
    
    ListNode(): data(0),next(nullptr){}
    ListNode(int x): data(x),next(nullptr){}
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

    ListNode* middleNode(ListNode* head)
    {
        ListNode* temp = head;
        int n = 0;
        while (temp!= nullptr)
        {
            temp = temp->next;
            n += 1;
        }

        temp = head;
        for (int i = 1; i<=(n/2); i++)
        {
            temp = temp->next;
        }
        return temp;
        
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
    head = sol.Insert(head,7);
    head = sol.Insert(head,5);
    head = sol.Insert(head,6);

    sol.Print(head);

    ListNode* middle = sol.middleNode(head);
    cout<<middle->data;
}

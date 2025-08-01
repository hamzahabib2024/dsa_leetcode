// 1290. convert a binary number in a linked list to integer

#include<iostream>
using namespace std;

struct ListNode
{
    int data;
    ListNode* next;

    ListNode(): data(0), next(nullptr){}
    ListNode(int x): data(x), next(nullptr){}
    ListNode(int x, ListNode* next): data(x), next(next){}
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

    int getDecimalValue(ListNode* head) {
        int result = 0;
        while(head != nullptr)
        {
            result = (result<<1) | head->data;
            head = head->next;
        }
        return result;
    }
};

int main()
{
    Solution sol;

    ListNode* head = nullptr;

    head = sol.Insert(head,1);
    head = sol.Insert(head,0);
    head = sol.Insert(head,1);
    // head = sol.Insert(head,7);
    // head = sol.Insert(head,7);
    // head = sol.Insert(head,5);
    // head = sol.Insert(head,6);

    sol.Print(head);

    int result = sol.getDecimalValue(head);
    cout<<result;
}

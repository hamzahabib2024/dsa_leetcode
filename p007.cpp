// to find the intersection in the two linked lists when two heads are given


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

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode* a = headA;
        ListNode* b = headB;
        while(a!=nullptr)
        {
            b = headB;
            while(b!= nullptr)
            {
                if (a==b)
                {
                    return a;
                }
                b= b->next;
            }
            a= a->next;
        }
        return a;
    }
};


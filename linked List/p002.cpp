//Reverse the linked list
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
 
 struct Node
 {
    int data;
    Node* next;
    Node(): data(0), next(nullptr) {}
    Node(int x): data(x), next(nullptr) {}
    Node(int x, Node* next): data(x), next(next) {}
 };



class Solution {
public:

    Node* Insert(Node* head,int data)   
    {
        Node* temp = new Node(data,nullptr);
        if (head==nullptr)
        {
            head = temp;
            return head;
        }
        Node* temp2 = head;
        while(temp2->next!= nullptr)
        {
            temp2 = temp2->next;
        }
        temp2->next = temp;
        return head;
    }


    
    void print(Node* p)
    {
        while(p!=nullptr)
        {
            cout<<p->data<<" ";
            p = p->next;
        }
        cout<<"\n";
    }

    Node* reverseList(Node* head) 
    {
        Node* current, *prev, *Next;
        current = head;
        prev = nullptr;
        while (current!= nullptr)
        {
            Next = current->next;
            current->next = prev;
            prev = current;
            current = Next;
        }
        head = prev;
        return head;
    }
};

int main()
{
    Solution sol;

    Node* head = nullptr;

    head = sol.Insert(head,2);
    head = sol.Insert(head,4);
    head = sol.Insert(head,6);
    head = sol.Insert(head,5);

    sol.print(head);

    head = sol.reverseList(head);

    sol.print(head);
}
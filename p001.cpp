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

#include <iostream>
using namespace std;

struct Node {
    int val;
    Node *next;
    Node() : val(0), next(nullptr) {}
    Node(int x) : val(x), next(nullptr) {}
    Node(int x, Node *next) : val(x), next(next) {}
};

class Solution
{
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
            cout<<p->val<<" ";
            p = p->next;
        }
        cout<<"\n";
    }



    Node* MergeLists(Node* list1,Node*list2)
    {
        Node* head = nullptr;
        while(list1 != nullptr || list2 != nullptr)
        {
            if (list1 == nullptr)
            {
 
                head = Insert(head,list2->val);
                list2 = list2->next;
                // return head;
            }
            else if (list2 == nullptr)
            {
                head = Insert(head,list1->val);
                list1 = list1->next;
                // return head;
            }
            else if (list1->val<=list2->val)
            {
                head = Insert(head,list1->val);
                list1 = list1->next;
            }
            else
            {
                head = Insert(head,list2->val);
                list2 = list2->next;
            }

        }
        return head;
    }
};

int main()
{
    Solution sol;
    Node* list1 = nullptr;
    Node* list2 = nullptr;

    list1 = sol.Insert(list1,-9);
    list1 = sol.Insert(list1,3);
    // list1 = sol.Insert(list1,5);
    // list1 = sol.Insert(list1,7);


    list2 = sol.Insert(list2,5);
    list2 = sol.Insert(list2,7);
    // list2 = sol.Insert(list2,6);
    // list2 = sol.Insert(list2,8);


    Node* mergeList = sol.MergeLists(list1,list2);

    sol.print(list1);
    sol.print(list2);
    sol.print(mergeList);


}


// Problem: Find Middle Element of Linked List
// Link to the problem: https://www.codechef.com/problems/LLMID
// #include <bits/stdc++.h>
// #define ll long long int
// #define ull unsigned long long int
// using namespace std;
// struct Node
// {
//     int val;
//     struct Node *next;
//     Node(int x)
//     {
//         val = x;
//         next = NULL;
//     }
// };

int getMiddleElement(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    Node *curr = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        curr = curr->next;
    }
    return slow->val;
}

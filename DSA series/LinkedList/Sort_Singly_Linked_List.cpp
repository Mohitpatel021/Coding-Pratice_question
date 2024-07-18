#include <iostream>
using namespace std;

// Define the structure of a singly linked list node
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(nullptr) {}
};

// Function to swap the data of two nodes
void swapData(ListNode *a, ListNode *b)
{
    int temp = a->val;
    a->val = b->val;
    b->val = temp;
}

// Bubble Sort function for linked lists using two pointers
ListNode *bubbleSort(ListNode *head)
{
    if (!head || !head->next)
        return head;

      bool swapped;

    do
    {
        swapped = false;
        ListNode *current = head;
        ListNode *prev = nullptr;

        while (current->next)
        {
            if (current->val > current->next->val)
            {
                swapData(current, current->next);
                swapped = true;
            }

            prev = current;
            current = current->next;
        }
    } while (swapped);

    return head;
}

// Function to print the linked list
void printList(ListNode *head)
{
    ListNode *current = head;
    while (current)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << std::endl;
}

int main()
{
    // Create an example linked list
    ListNode *head = new ListNode(3);
    head->next = new ListNode(1);
    head->next->next = new ListNode(4);
    head->next->next->next = new ListNode(2);

    cout << "Original Linked List: ";
    printList(head);

    // Sort the linked list using Bubble Sort with two pointers
    bubbleSort(head);
    cout << "Sorted Linked List: ";
    printList(head);

    return 0;
}

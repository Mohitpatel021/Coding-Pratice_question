#include <iostream>
struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

class CircularLinkedList
{
private:
    Node *head;

public:
    CircularLinkedList() : head(nullptr) {}

    // Function to append a node to the end of the circular linked list
    void append(int val)
    {
        Node *newNode = new Node(val);
        if (!head)
        {
            head = newNode;
            head->next = head; // Circular reference to itself
        }
        else
        {
            Node *current = head;
            while (current->next != head)
            {
                current = current->next;
            }
            current->next = newNode;
            newNode->next = head;
        }
    }

    // Function to print the circular linked list
    void display()
    {
        if (!head)
        {
            return;
        }

        Node *current = head;
        do
        {
            std::cout << current->data << " -> ";
            current = current->next;
        } while (current != head);
        std::cout << " (Head)" << std::endl;
    }

    // Function to perform Bubble Sort on the circular linked list
    void bubbleSort()
    {
        if (!head)
        {
            return; // Empty list
        }

        Node *current;
        bool swapped;

        do
        {
            swapped = false;
            current = head;

            do
            {
                if (current->data > current->next->data)
                {
                    // Swap data values
                    int temp = current->data;
                    current->data = current->next->data;
                    current->next->data = temp;

                    swapped = true;
                }
                current = current->next;
            } while (current != head);
        } while (swapped);
    }
};
int main()
{
    CircularLinkedList list;
    list.append(5);
    list.append(3);
    list.append(7);
    list.append(1);
    list.append(9);

    std::cout << "Original circular linked list:" << std::endl;
    list.display();

    list.bubbleSort();

    std::cout << "Sorted circular linked list using Bubble Sort:" << std::endl;
    list.display();
    

    return 0;
}

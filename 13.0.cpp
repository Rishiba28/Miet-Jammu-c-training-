#include <iostream>
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return nullptr;

        ListNode* current = head;
        while (current->next) {
            if (current->val == current->next->val) {
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp; // Free memory of the duplicate node
            } else {
                current = current->next;
            }
        }
        return head;
    }
};

// Helper function to print the list
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != NULL) {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

// Helper function to create a new ListNode
ListNode* createNode(int val) {
    return new ListNode(val);
}

int main() {
    // Creating a sorted linked list: 1 -> 1 -> 2 -> 3 -> 3
    ListNode* head = createNode(1);
    head->next = createNode(1);
    head->next->next = createNode(2);
    head->next->next->next = createNode(3);
    head->next->next->next->next = createNode(3);

    std::cout << "Original list: ";
    printList(head);

    Solution solution;
    head = solution.deleteDuplicates(head);

    std::cout << "List after removing duplicates: ";
    printList(head);

    return 0;
}



/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to check if two linked lists are identical
    bool areIdentical(struct Node *head1, struct Node *head2) {
        while (head1 != nullptr && head2 != nullptr) {
            if (head1->data != head2->data)
                return false;

            head1 = head1->next;
            head2 = head2->next;
        }

        // If both lists have ended, they are identical
        return (head1 == nullptr && head2 == nullptr);
    }
};

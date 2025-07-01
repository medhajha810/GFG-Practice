/* Link list Node
struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */
class Solution {
  public:
    int getMiddle(Node* head) {
        if (!head) return -1;  // Empty list case

        Node* slow = head;
        Node* fast = head;

        // Move fast by two steps, slow by one step
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow->data;  // Middle node
    }
};

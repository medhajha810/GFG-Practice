/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {

        // Code here
        int count=0;
        Node* curr=head;
        while(curr){
            count++;
            curr=curr->next;
        }
        return count;
    }
};
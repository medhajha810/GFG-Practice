class Solution {
    void leaf(Node* root, vector<int>& res) {
        if (root == NULL) return;
        if (root->left == NULL && root->right == NULL) {
            res.push_back(root->data);
            return;
        }
        leaf(root->left, res);
        leaf(root->right, res);
    }

    void left(Node* root, vector<int>& res) {
        Node* curr = root->left;
        while (curr) {
            if (!(curr->left == NULL && curr->right == NULL)) {
                res.push_back(curr->data);
            }
            if (curr->left) curr = curr->left;
            else curr = curr->right;
        }
    }

    void right(Node* root, vector<int>& res) {
        Node* curr = root->right;
        vector<int> temp;
        while (curr) {
            if (!(curr->left == NULL && curr->right == NULL)) {
                temp.push_back(curr->data);
            }
            if (curr->right) curr = curr->right;
            else curr = curr->left;
        }
        // Reverse before adding to result
        for (int i = temp.size() - 1; i >= 0; i--) {
            res.push_back(temp[i]);
        }
    }

public:
    vector<int> boundaryTraversal(Node* root) {
        vector<int> res;
        if (root == NULL) return res;

        // Add root only if it is not a leaf
        if (!(root->left == NULL && root->right == NULL)) {
            res.push_back(root->data);
        }

        left(root, res);       // Left boundary (excluding leaves)
        leaf(root, res);       // All leaves
        right(root, res);      // Right boundary (bottom-up)

        return res;
    }
};

#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Create new node
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Traversals
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void preorder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    Node* root = NULL;
    int choice;

    do {
        cout << "\n--- Binary Tree Menu ---\n";
        cout << "1. Create Binary Tree\n";
        cout << "2. Inorder Traversal\n";
        cout << "3. Preorder Traversal\n";
        cout << "4. Postorder Traversal\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                // Creating fixed tree
                root = createNode(45);
                root->left = createNode(20);
                root->right = createNode(75);
                root->left->left = createNode(14);
                root->left->right = createNode(10);

                cout << "Binary Tree Created Successfully!\n";
                break;

            case 2:
                if (root == NULL)
                    cout << "Create tree first!\n";
                else {
                    cout << "Inorder: ";
                    inorder(root);
                    cout << endl;
                }
                break;

            case 3:
                if (root == NULL)
                    cout << "Create tree first!\n";
                else {
                    cout << "Preorder: ";
                    preorder(root);
                    cout << endl;
                }
                break;

            case 4:
                if (root == NULL)
                    cout << "Create tree first!\n";
                else {
                    cout << "Postorder: ";
                    postorder(root);
                    cout << endl;
                }
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 5);

    return 0;
}
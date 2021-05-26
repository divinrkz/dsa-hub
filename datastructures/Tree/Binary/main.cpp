#include <iostream>
using namespace std;


class BST {
    
    struct Node {
        int data;
        Node* left;
        Node* right;
    };

    Node* root;

    Node* empty(Node* node) {
        if (node == NULL)
            return NULL;

        empty(node->left);
        empty(node->right);    
        delete(node);
        return NULL;
    }


    Node* insert(Node* node, int data) {
        if (node == NULL) {
            node = new Node;
            node->data = data;
            node->left = node->right = NULL;
        }
        else if (data < node->data)
            node->left = insert(node->left, data);
        else if (data > node->data)
            node->right = insert(node->right, data);

        return node; 
    }



};
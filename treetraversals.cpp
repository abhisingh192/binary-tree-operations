// C++ program for different tree traversals
#include <iostream>
#include<cstdlib>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node
{
     int data;
     struct node* left;
     struct node* right;
};

/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct node* newNode(int data)
{
     struct node* temp = new node;
     temp->data = data;
     temp->left = NULL;
     temp->right = NULL;

     return(temp);
}

/* Given a binary tree, print its nodes according to the
  "bottom-up" postorder traversal. */
void printPostorder(struct node* node)
{
     if (node == NULL)
        return;

     // first recur on left subtree
     printPostorder(node->left);

     // then recur on right subtree
     printPostorder(node->right);

     // now deal with the node
     cout<< node->data<<" ";
}

/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct node* node)
{
     if (node == NULL)
          return;

     /* first recur on left child */
     printInorder(node->left);

     /* then print the data of node */
     cout<< node->data<<" ";


     /* now recur on right child */
     printInorder(node->right);
}

/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct node* node)
{
     if (node == NULL)
          return;

     /* first print data of node */
        cout<< node->data<<" ";

     /* then recur on left sutree */
     printPreorder(node->left);

     /* now recur on right subtree */
     printPreorder(node->right);
}


int main()
{
     struct node *root  = newNode(1);
     root->left             = newNode(2);
     root->right           = newNode(3);
     root->left->left     = newNode(4);
     root->left->right   = newNode(5);

     cout<<endl<<"Preorder traversal of binary tree is"<<endl;
     printPreorder(root);

     cout<<endl<<"Inorder traversal of binary tree is"<<endl;
     printInorder(root);

     cout<<endl<<"Postorder traversal of binary tree is"<<endl;
     printPostorder(root);


     return 0;
}

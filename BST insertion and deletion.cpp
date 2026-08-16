#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *left,*right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};
Node* insert(Node* root,int x){
    if(root==NULL)
        return new Node(x);
    if(x<root->data)
        root->left=insert(root->left,x);
    else
        root->right=insert(root->right,x);
    return root;
}
Node* minValue(Node* root){
    while(root->left!=NULL)
        root=root->left;
    return root;
}
Node* deleteNode(Node* root,int x){
    if(root==NULL)
        return NULL;
    if(x<root->data)
        root->left=deleteNode(root->left,x);
    else if(x > root->data)
        root->right=deleteNode(root->right,x);
    else{
        if(root->left==NULL) {
            Node* temp=root->right;
            delete root;
            return temp;
        }
        if(root->right==NULL) {
            Node* temp=root->left;
            delete root;
            return temp;
        }
        Node* temp=minValue(root->right);
        root->data=temp->data;
        root->right=deleteNode(root->right,temp->data);
    }
    return root;
}
void inorder(Node* root){
    if(root==NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main(){
    Node* root=NULL;
    root = insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,70);
    insert(root,50);
    insert(root,80);
    cout << "Inorder: ";
    inorder(root);
    cout << endl;
    root = deleteNode(root,20);
    cout << "After deleting 20: ";
    inorder(root);
    cout << endl;
    root = deleteNode(root,30);
    cout << "After deleting 30: ";
    inorder(root);
    cout << endl;
    root = deleteNode(root,50);
    cout << "After deleting 50: ";
    inorder(root);
    cout << endl;
    return 0;
}

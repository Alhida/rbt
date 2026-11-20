#include<stdio.h>
#include<stdlib.h>
#define RED 0
#define BLACK 1
struct Node{
int data;
int color;
struct Node*left;
struct Node*right;
struct Node*parent;
};
typedef struct Node Node;
Node*root;
Node*NIL;
Node* createNode(int data)]
{
Node *newNode=(Node*)malloc(sizeof(Node));
newNode->left=NIL;
newNode->right=NIL;
newNode->parent=NIL;
return newNode;
}
void initialize()
{
NIL=(Node*)malloc(sizeof(Node));
NIL->color=BLACK;
NIL->left=NIL;
NIL->right=NIL;
NIL->parent=NIL;
root=NIL;
}
void leftRotate(Node*x)
{
Node*y=x->right;
x->right=y->left;
if(y>left!=NIL)
y->left->parent=x;
y->parent=x->parent;
if(x>parent==NIL)
root=y;
else if(x==x->parent->left)
x->parent->left=y;
else
x->parent->right=y;
y->left=x;
x->parent=y;
}
void rightRotate(Node*y)
{
Node*x=y->left;
y->left=x->right;
if(x>right!=NIL)
x->right->parent=y;
x->parent=y->parent;
if(y>parent==NIL)
root=x;
else if(y==y->parent->right)
y->parent->right=x;
else
y->parent->left=x;
x->right=y;
y->parent=x;
}
void insertFix(Node*z)
{
Node*y;
while(z->parent->color==RED)





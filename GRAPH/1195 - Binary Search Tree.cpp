#include<iostream>
using namespace std;

//making node;
struct node
{
  int data;
  struct node *left;
  struct node *right;
};

/// @brief making node
struct node*createnode(int data)
{
  struct node *root;
  root = (struct node *) malloc (sizeof(struct node));
  root->data = data;
  root->left = NULL;
  root->right = NULL;
  return root;
}

/// @brief adding node in binary raw;
struct node* insertnode(struct node*root,int data)
{
  if(root == NULL)
  {
  root = createnode(data);
    return root;
  }
  else if(data<=root->data)
  {
    root->left = insertnode(root->left,data);
  }
  else 
  root->right = insertnode(root->right,data);
  return root;
}

// preorder
void preorder(struct node *root)
{
  if(root != NULL)
  {
  cout<<" "<<root->data;
  preorder(root->left);
  preorder(root->right);
  }
}

//inorder
void inorder(struct node *root)
{
  if(root != NULL)
  {
  inorder(root->left);
  cout<<" "<<root->data;
  inorder(root->right);
  }
}

//post order
void postorder(struct node *root)
{
  if(root != NULL)
  {
  postorder(root->left);
  postorder(root->right);
  cout<<" "<<root->data;
  }
}
int main()
{
int c;
cin>>c;
  int n;
    int x;
for(int i = 0;i<c;i++)
{
  struct node *root = NULL;
  cin>>n;
  for(int j = 0;j<n;j++)
  {
    cin>>x;
    root = insertnode(root,x);
  }
  cout <<"Case "<<i+1<<":"<<endl;
  cout<<"Pre.:";
  preorder(root);
  cout<<endl;
  cout<<"In..:";
  inorder(root);
  cout<<endl;
  cout<<"Post:";
  postorder(root);
  cout<<endl;
  cout<<endl;
}

  return 0;
}

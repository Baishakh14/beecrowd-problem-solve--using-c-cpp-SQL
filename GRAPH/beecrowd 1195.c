#include<stdio.h>
#include<stdlib.h>
///create node for binary search
struct node
{
    int data;
    struct node *left;
    struct node* right;
};

///create each node and inser data and make left rigt part NULL
struct node* createnode(unsigned int data)
{
    struct node *root = (struct node*) malloc(sizeof(struct node));
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    return root;
};


///connect following binary search theory and connect node each node in right or left
struct node* insertnode(struct node *root,unsigned int data)
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
    {
        root->right = insertnode(root->right,data);
    }
    return root;
};

///preorder traverse
void preorder(struct node *root)
{
    if(root!=NULL)
    {
    printf(" %d",root->data);
    preorder(root->left);
    preorder(root->right);
    }
}

///inorder traverse
void inorder(struct node *root)
{
    if(root!=NULL)
    {
    inorder(root->left);
    printf(" %d",root->data);
    inorder(root->right);
    }
}
 ///post order traverse
void postorder(struct node *root)
{
    if(root!=NULL)
    {
    postorder(root->left);
    postorder(root->right);
    printf(" %d",root->data);
    }
}
///main function start from here
int main()
{
    int ab = 1;
    int c;
    scanf("%d",&c); ///taste case
    while(c--)
    {
        struct node *root = NULL;
        int n;
        scanf("%d",&n);
        unsigned int x;
        for(int i = 0;i<n;i++)
        {
            scanf("%u",&x);
            root = insertnode(root,x);
        }
        printf("Case %d:\n",ab++);
        printf("Pre.:");
        preorder(root);
        printf("\n");
        printf("In..:");
        inorder(root);
        printf("\n");
        printf("Post:");
        postorder(root);
        printf("\n");
        printf("\n");

    }

    return 0;
}


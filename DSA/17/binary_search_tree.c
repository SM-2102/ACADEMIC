/* menu driven program to implement tree
   1. insert a new node 
   2. delete a new node
   3. print in inorder
   4. print in postorder
   5. print in preorder  */
   
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left, *right;
};

struct node *new_node(int value)
{	
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->data= value;
	temp->left = temp->right = NULL;
	return temp;
}

struct node *minval(struct node *node)
{
	struct node *temp = node;
	while(temp && temp->left !=NULL)
		temp = temp->left;
	return temp;
}

struct node *delete(struct node *root, int value)
{
	if (root==NULL)
		return root;
	if(value<root->data)
		root->left = delete(root->left,value);
	else if(value>root->data)
		root->right = delete(root->right,value);
	else
	{	
		if(root->left==NULL)
		{
			struct node *temp = root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			struct node *temp = root->left;
			free(root);
			return temp;
		}
		struct node *temp = minval(root->right);
		root->data = temp->data;
		root->right = delete(root->right, temp->data);
	}
	return root;
}

void inorder(struct node *root)
{
	if (root!=NULL)
	{
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
}

void preorder(struct node *root)
{
	if (root!=NULL)
	{
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(struct node *root)
{
	if (root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d ",root->data);
	}
}

struct node *insert(struct node *node, int data)
{
	if (node==NULL)
		return new_node(data);
	if(data<node->data)
		node->left = insert(node->left,data);
	else
		node->right = insert(node->right,data);
	return node;
}

int main()
{
	struct node *root=NULL;
	printf("Enter :\n1 to insert a node \n2 to delete a node\n3 to print in inorder\n4 to print in postoder\n5 to print in preorder\n6 to exit.\n");
	int choice,num,value;
	do
	{
		printf("Enter choice : ");	
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter -1 to exit.\n");
				printf("Enter : ");
				scanf("%d",&num);
				while(num!=-1)
				{
					root = insert(root,num);
					printf("Enter : ");
					scanf("%d",&num);
				}
				break;
			case 2:
				printf("Enter value : ");
				scanf("%d",&value);
				root = delete(root,value);
				break;
			case 3:
				printf("Inorder traversal : \n");
				inorder(root);
				printf("\n");
				break;
			case 4:
				printf("Post-order traversal : \n");
				postorder(root);
				printf("\n");
				break;
			case 5:
				printf("Pre-order traversal : \n");
				preorder(root);
				printf("\n");
				break;
			case 6:
				break;
			default:
				printf("Wrong Input.\n");
		}
	} while(choice!=6);
}


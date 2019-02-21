#include <bits/stdc++.h>

using namespace std;

/* A binary tree node has data, pointer to left and a pointer to right child */
struct Node {
	char data;
	struct Node* left;
	struct Node* right;
};

typedef struct Node Node;

/* Prototypes for utility functions */
int search_index(char arr[], int strt, int end, char value); 
Node* new_node(char data);

/* UTILITY FUNCTIONS */
/* Function to find index of value in arr[start...end]
   The function assumes that value is present in in[] */
int search_index(char arr[], int strt, int end, char value) {
	int i;
	for (i = strt; i <= end; i++) {
		if (arr[i] == value)
			return i;
	}

	return -1;
}


int preIndex;
/* Recursive function to construct binary of size len from
   Inorder traversal in[] and Preorder traversal pre[]. Initial values
   do any error checking for cases where inorder and preorder
   do not form a tree */
Node* build_tree(char in[], char pre[], int in_strt, int in_end) {

	if (in_strt > in_end)
		return NULL;

	/* Pick current node from Preorder traversal using preIndex
	   and increment preIndex */
	Node* t_node = new_node(pre[preIndex++]);

	/* If this node has no children then return */
	if (in_strt == in_end)
		return t_node;

	/* Else find the index of this node in Inorder traversal */
	int in_index = search_index(in, in_strt, in_end, t_node->data);

	/* Using index in Inorder traversal, construct left and right subtrees */
	t_node->left = build_tree(in, pre, in_strt, in_index - 1);
	t_node->right = build_tree(in, pre, in_index+1, in_end);

	return t_node;
}


/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
Node* new_node(char data) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->left = node->right = NULL;

	return node;
}

/* This function is here just to test build_tree() */
void postorder(Node* node) {
	if (node == NULL) return;

	/* first recur on left child */
	postorder(node->left);
	
	/* then recur on right child */
	postorder(node->right);

	/* then print the data of node */
	cout << node->data;
}

void preorderr(Node* node) {
	if (node == NULL) return;

	cout << node->data;
	/* first recur on left child */
	preorderr(node->left);
	
	/* then recur on right child */
	preorderr(node->right);

	/* then print the data of node */
}

void inorderr(Node* node) {
	if (node == NULL) return;

	/* first recur on left child */
	inorderr(node->left);
	
	cout << node->data;
	/* then recur on right child */
	inorderr(node->right);

	/* then print the data of node */
}

/* Driver program to test above functions */
int main() {
	int C;
	int N;

	cin >> C;
	while (C--) {
		preIndex = 0;

		Node* tree = NULL;
		cin >> N;

		char inorder[N+1];
		char preorder[N+1];

		cin >> preorder >> inorder;

		tree = build_tree(inorder, preorder, 0, strlen(inorder)-1);

		//preorderr(tree); cout << endl;
		//inorderr(tree); cout << endl;
		postorder(tree); cout << endl;

		//cout << endl;
	}

	return 0;
}
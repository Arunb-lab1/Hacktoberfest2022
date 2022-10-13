#include<stdio.h>
#include<stdlib.h>

// node structure
struct node
{
	int data;
	struct node* link;
};

// global head
struct node* head;

// function to inserting a node at start of linked list
void insert(int a)
{
	// new node
	struct node* temp =  (node*)malloc(sizeof(node));
	// inserting node at the start
	temp->data = a;
	temp->link = head;
	head = temp;
}

// function to print the linked list
void print()
{
	// temporary node pointer
	struct node* temp = head;

	for (; temp != NULL;)
	{
		printf("%d ", temp->data);
		temp = temp->link;

	} printf("\n");

}

int main() {

	// random inputs/test cases
	head = NULL;
	int n; scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		int a;
		scanf("%d", &a);
		insert(a);
		print();
	}
	return 0;
}

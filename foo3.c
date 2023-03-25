#include <stdio.h>
#include <stdlib.h>

struct node* addToEmpty(struct node* head, int data);
struct node* addAtEnd(struct node* head, int data);
struct node* create_list(struct node* head);

struct node {
	struct node* prev;
	int data;
	struct node* next;
};

int main()
{
	struct node* head = NULL;
	struct node* ptr;
	head = create_list(head);
	
	ptr = head;

	while(ptr != NULL)
	{
		printf("%d \n", ptr -> data);
		ptr = ptr -> next;
	}

	return (0);
}

struct node* addToEmpty(struct node* head, int data)
{
	struct node* temp = malloc(sizeof(struct node));
	temp -> prev = NULL;
	temp -> data = data;
	temp -> next = NULL;
	head = temp;

	return head;
}

struct node* addAtEnd(struct node* head, int data)
{
	struct node* temp, *tp;
	temp = malloc(sizeof(struct node));
	temp -> prev = NULL;
	temp -> data = data;
	temp -> next = NULL;
	tp = head;

	while(tp -> next != NULL)
		tp = tp -> next;
	tp -> next = temp;
	temp -> prev = tp;

	return head;
}
struct node* create_list(struct node* head)
{
	int data,n,i;

	printf("Enter the number of nodes: ");
	scanf("%d\n",&n);

	if(n == 0)
		return head;
	printf("Enter the first element of the node: ");
	scanf("%d\n",&data);
	head = addToEmpty(head, data);

	for( i = 1; i < n ; i++)
	{
		printf("Enter the next element of the node: ");
		scanf("%d\n",&data);
		head = addAtEnd(head, data);
	}
	
	return head;
}



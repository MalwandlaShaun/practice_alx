#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* link;
}

int main(){
	struct node* head = malloc(sizeof(struct node));
	head -> data = 25;
	head -> link = NULL;

	struct node* current = malloc(sizeof(struct node));
	current -> data = 98;
	current -> link = NULL;
	head -> link = current;

	current = malloc(sizeof(struct node));
	current -> data = 29;
	current -> link = NULL;

	head -> link -> link = current;
	
	count_of_nodes(head);
	print_data(head);
	return 0;
} 

void count_of_nodes(struct node* head)
{
	int count = 0;
	if (head == NULL){
		printf("The list is empty!!!");
	}
	struct node* ptr = NULL;
	ptr = head;

	while(ptr != NULL){
		count++;
		ptr = ptr -> link;
	}
	printf("the size of this list is: %d\n", count);
}

void print_data(struct node* head)
{
	if (head == NULL) {
		printf("The list is empty!!!");
	}
	struct node* ptr = NULL;
	ptr = head;
	while(ptr != NULL)
	{
		printf("%d\n", ptr -> data);
		ptr = ptr -> link;
	}
}

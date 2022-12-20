#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void doublylinkedlist(struct Node* ,int prev_node, int new_node)
{
	if (prev_node == NULL) {
		printf("the given previous node cannot be NULL");
		return;
	}
	struct Node* new_node =(struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
	new_node->prev = prev_node;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
}

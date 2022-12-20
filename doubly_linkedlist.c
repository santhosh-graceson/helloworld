
void doublylinkedlist(struct Node* prev_node, int new_data)
{
	if (prev_node==0)
     {
		printf("The previous node cannot be NULL");
		return;
	}
	struct Node* new_node 
    =(struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
	new_node->prev = prev_node;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
}

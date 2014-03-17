#Snippet to reverse a linked list recursively

#typedef struct node_t node;

struct node_t{
	/* data */
	int data;
	node * next;
}
/*

Recursively calls till the last node is encountered

node1->node2->node3

last call in stack pass
nextNode = node3; 
node2->next->next ===> node3->next = node2 and so on

*/
node * reverseLinkedListRecursively(node * list){
	if (list->next==NULL){
		return list;
	}
	node * nextNode =  reverseLinkedListRecursively(list->next);
	list->next->next = nextNode;
	list->next = NULL;
}
/*

This does the above reversuing but iteratively
No explanation needed and is self explanatory
*/

node * reverseLinkedListIteratively(node * list){
	node * prev = NULL;
	node * current = list;
	while(current){
		node * next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
}

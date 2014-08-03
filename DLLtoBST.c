void DLLTOBST(LLNnode* list, int start, int end) {
	if(start > end) return NULL;
	int mid = start +(end -start) /2;
	Node * leftChild = DLLToBST(list, start, mid-1);
	Node * node = newNode(list->data);
	list = list-> next;
	node->leftChild = leftChild;
	node->rightChild = DLLToBST(list,mid+1, end);
	return node;
}

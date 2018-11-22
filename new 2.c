#include <stdio.h>
#include <malloc.h>

typedef struct node{
	void *dataPtr;
	struct node* link;
}NODE;

NODE* createNode (void* itemPtr){
	NODE* nodePtr = NULL;
	nodePtr = (NODE*)malloc(sizeof(NODE));
	nodePtr->dataPtr = itemPtr;
	nodePtr->link = NULL;
	return nodePtr;
}


int main(void){
	int* newData = NULL;
	int* nodeData = NULL;
	NODE* node = NULL;
	
	int* newData2 = NULL;
	int* nodeData2 = NULL;
	NODE* node2 = NULL;
	
	newData = (int*)malloc(sizeof(int));
	*newData = 7;
	
	newData2 = (int*)malloc(sizeof(int));
	*newData2 = 75;
	
	node = createNode(newData);
	node2 = createNode(newData2);
	node->link = node2;
	
	
	nodeData = (int*)node->dataPtr;
	nodeData2 = (int*)node2->dataPtr;
	printf("Data from node1 : %d\n", *nodeData);
	printf("Data from node2 : %d\n", *nodeData2);
	
	return 0;
}
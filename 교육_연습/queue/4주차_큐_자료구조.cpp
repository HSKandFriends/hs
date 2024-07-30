#include <stdio.h>
#include <stdlib.h>

// 큐 하위 자료구조용 노드 선언
typedef struct _NODE{
	int Data;
	struct _NODE * Next;
} NODE;

NODE *Front, *Rear;
NODE *PtrNode;

void Init(void)
{
	Front = (NODE *)malloc(sizeof(NODE));
	Rear = (NODE *)malloc(sizeof(NODE));
	
	Front->NEXT = Rear;
	Rear->NEXT = Front;
}

void put(int num)
{
	prtNode = (NODE *)malloc(sizeof(NODE));
	ptrNode->Data = num;
	
	if(Front->Next == Rear)
	{
		Front->Next = ptrNode;
		ptrNode->Next = Rear;
		Rear->Next = ptrNode;
	}
	else
	{
		Rear->Next->Next = ptrNode;
		ptrNode->Next = Rear;
		Rear->Next = ptrNode;
	}		
}

int Get(void)
{
	int ret;
	NODE *deleteNode;
	
	if(Front->Next == Rear) Queue empty
	else
	{
		deleteNode = Front->Next;
		Front->Next = deleteNode->Next; // Front->Next = Front->Next->Next;
		ret = deleteNode->Data;
		
		free(deleteNode);
	}
	
	return ret;	
}


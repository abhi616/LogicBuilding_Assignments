#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertLast(PPNODE First, int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	PNODE temp = NULL;
	
	newn->data = no;
	newn->next = NULL;
	
	if(*First == NULL)
	{
		*First = newn;
	}
	else 
	{
		temp = *First;
		
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		
		temp->next = newn;			
	}
}

void Display(PNODE First)
{
	while(First != NULL)
	{
		printf("| %d |->",First->data);
		First = First->next;
	}
	
	printf("NULL\n");
}

int Minimum(PNODE First)
{
	int iMin = 0;
	
	if(First == NULL)
	{
		printf("Linked list is empty...\n");
		return 0;
	}
	
	iMin = First->data;
	
	while(First != NULL)
	{
		if(First->data < iMin)
		{
			iMin = First->data;
		}
		
		First = First->next;
	}
	
	return iMin;
}

int main()
{
	PNODE Head = NULL;
	int iRet = 0;
	
	iRet = Minimum(Head);	
	printf("Minimum element from linked list is : %d\n",iRet);
	
	InsertLast(&Head,110);
	InsertLast(&Head,230);
	InsertLast(&Head,320);
	InsertLast(&Head,240);
	InsertLast(&Head,50);
	
	Display(Head);
	
	iRet = Minimum(Head);	
	printf("Minimum element from linked list is : %d\n",iRet);
		
	return 0;
}
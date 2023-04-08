#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

int SecondMaximum(PNODE First)
{
	int iMax = 0, iSecMax = 0;
	
	if(First == NULL)
	{
	   printf("Linked list is empty...\n");
	   return 0;	
	}
	
	iMax = First->data;
	iSecMax = First->data;;
	while(First != NULL)
	{
		if(First->data > iMax)
		{
			iSecMax = iMax;
		   iMax = First->data;
		}
		else if(First->data > iSecMax && First->data < iMax)
		{
		   iSecMax = First->data;
		}
		
		First = First->next;
	}
	
	return iSecMax;
}

int main()
{
	PNODE Head = NULL;
	int iRet = 0;
	
	InsertLast(&Head,11);
	InsertLast(&Head,28);
	InsertLast(&Head,51);
	InsertLast(&Head,17);
	InsertLast(&Head,41);
	InsertLast(&Head,89);
	
	Display(Head);
	
	iRet = SecondMaximum(Head);
	
	printf("\nSecond maximum element from linked list is : %d\n",iRet);
	
	return 0;
}
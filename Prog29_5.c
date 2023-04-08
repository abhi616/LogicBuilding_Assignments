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

void SumDigit(PNODE First)
{
	int iDigit = 0, No = 0, iSum = 0, iTemp = 0;
	
	if(First == NULL)
	{
	   printf("Linked list is empty...\n");
	   return;	
	}
	
	while(First != NULL)
	{
		No = First->data;
		iTemp = No;
		while(iTemp > 0)
		{
			iDigit = iTemp % 10;
			iSum = iSum + iDigit;
			iTemp = iTemp / 10;
		}
		
		printf("Summation of digits from %d is : %d\n",No,iSum);
		
		First = First->next;
		iSum = 0;
	}
	
}

int main()
{
	PNODE Head = NULL;
	
	InsertLast(&Head,11);
	InsertLast(&Head,28);
	InsertLast(&Head,51);
	InsertLast(&Head,17);
	InsertLast(&Head,41);
	InsertLast(&Head,89);
	
	Display(Head);
	
	SumDigit(Head);
	
	return 0;
}
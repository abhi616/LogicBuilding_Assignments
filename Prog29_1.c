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

void DisplayPerfect(PNODE First)
{
	int No = 0, iSum = 0, i = 0;
	
	while(First != NULL)
	{
		No = First->data;
		for(i = 1; i <= No/2 ;i++)
		{ 
			if(No % i == 0)
			{
			  iSum = iSum + i;
			}
		}
		
		if(iSum == No)
		{
			printf("%d is a perfect number\n",No);
		}
		iSum = 0;
		First = First->next;
	}
}

int main()
{
	PNODE Head = NULL;
	
	InsertLast(&Head,11);
	InsertLast(&Head,28);
	InsertLast(&Head,51);
	InsertLast(&Head,6);
	InsertLast(&Head,111);
	InsertLast(&Head,121);
	
	Display(Head);
	
	DisplayPerfect(Head);
	
	return 0;
}
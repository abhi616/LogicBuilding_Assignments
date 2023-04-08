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

void DisplayProduct(PNODE First)
{
	int iProduct = 1, iDigit = 0, No = 0;
	
	while(First != NULL)
	{
		No = First->data;
		
		while(No > 0)
		{
			iDigit = No % 10;
			if(iDigit == 0)
			{
				continue;
			}
			iProduct = iProduct * iDigit;
			No = No / 10;
		}
		
		printf("Product of digits from %d is %d\n",First->data,iProduct);

		First = First->next;
		
		iProduct = 1;
	}	
}

int main()
{
	PNODE Head = NULL;
	
	InsertLast(&Head,11);
	InsertLast(&Head,28);
	InsertLast(&Head,51);
	InsertLast(&Head,6);
	InsertLast(&Head,414);
	InsertLast(&Head,89);
	
	Display(Head);
	
	DisplayProduct(Head);
	
	return 0;
}
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

void DisplayPrime(PNODE First)
{
	int No = 0, i = 0;
	bool bFlag = false;
	
	while(First != NULL)
	{
		No = First->data;
		
		for(i = 2; i <= (No/2); i++)
		{
			if(No % i == 0)
			{
				bFlag = true;
				break;
			}
		}
		
		if(bFlag == false)
		{
			printf("%d is prime number\n",No);
		}
		
		bFlag = false;
		First = First->next;
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
	
	DisplayPrime(Head);
	
	return 0;
}
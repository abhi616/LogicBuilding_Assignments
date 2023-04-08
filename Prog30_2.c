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

void DisplayPalindrome(PNODE First)
{
	int iRev = 0, iDigit = 0, No = 0;
	while(First != NULL)
	{
		No = First->data;
		
		while(No > 0)
		{
			iDigit = No % 10;
			iRev = iRev*10 + iDigit;
			No = No / 10;
		}
		
		if(iRev == First->data)
		{
			printf("%d is palindrome\n",iRev);
		}
		First = First->next;
		
		iRev = 0;
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
	
	DisplayPalindrome(Head);
	
	return 0;
}
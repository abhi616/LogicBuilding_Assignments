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

void InsertFirst(PPNODE First, int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = no;
	newn->next = NULL;
	
	if(*First == NULL)
	{
		*First = newn;
	}
	else 
	{
		newn->next = *First;
		*First = newn;
	}
}

void Display(PNODE First)
{
	printf("\nElements of linked list are : \n");
	while(First != NULL)
	{
		printf("| %d |->",First->data);
		First = First->next;
	}
	
	printf("\n");
}

void FindOccurence(PNODE First, int No)
{
	int i = 1;
	bool bFlag = false;
	
	while(First != NULL)
	{
		if(First->data == No)
		{
			bFlag = true;
			break;
		}
		i++;
		First = First->next;
	}
	
	if(bFlag == true)
	{
		printf("First Occurence of %d in linked list is : %d\n",No,i);
	}
	else 
	{
		printf("%d is not found in linked list\n",No);
	}
}

int main()
{
	PNODE Head = NULL;
	int iNo = 0;
	
	InsertFirst(&Head,121);
	Display(Head);
	
	InsertFirst(&Head,111);
	InsertFirst(&Head,101);
	InsertFirst(&Head,51);
	InsertFirst(&Head,21);
	InsertFirst(&Head,11);
	Display(Head);
	
	printf("Enter element which you want to search first occurence of that number : \n");
	scanf("%d",&iNo);
	
	FindOccurence(Head,iNo);
	
	return 0;
}
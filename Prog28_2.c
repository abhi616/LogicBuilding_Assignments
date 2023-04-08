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

int LastOccurence(PNODE First, int iNo)
{
	int iOccure = 0, i = 1;
	
	while(First != NULL)
	{
		if(First->data == iNo)
		{
			iOccure = i;
		}
		i++;
		First = First->next;
	}
	
	return iOccure;
}

int main()
{
	PNODE Head = NULL;
	int iRet = 0, iValue = 0;
	
	InsertLast(&Head,11);
	InsertLast(&Head,21);
	InsertLast(&Head,51);
	InsertLast(&Head,101);
	InsertLast(&Head,11);
	InsertLast(&Head,1);
	InsertLast(&Head,21);
	
	Display(Head);
	
	printf("Enter element which you want to search last occurence of that number : \n");
	scanf("%d",&iValue);
	
	iRet = LastOccurence(Head,iValue);
	
	if(iRet == 0)
	{
		printf("%d is not found in linked list\n",iValue);
	}
	else
	{
		printf("Last Occurence of %d in linked list is : %d\n",iValue,iRet);
	}
	
	return 0;
}
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
	if( (ch >= 'a') && (ch <= 'z') || (ch >= 'A') && (ch <= 'Z') || (ch >= '0') && (ch <= '9') )
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
	
}

int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;
	
	printf("Enter the character : \n");
	scanf("%c",&cValue);
	
	bRet = ChkSpecial(cValue);
	
	if(bRet == TRUE)
	{
		printf("It is special character\n");
	}
	else
	{
		printf("It is not a special character\n");
	}
	
	return 0;
}

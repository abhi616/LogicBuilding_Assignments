#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT No)
{
	UINT iMask = 0X08104040;
	UINT iRes = 0;
	
	iRes = No & iMask;
	
	if(iRes == iMask)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	UINT Value = 0;
	BOOL bRet = FALSE;
	
	printf("Enter number : ");
	scanf("%d",&Value);
	
	bRet = ChkBit(Value);
	
	if(bRet == TRUE)
	{
		printf("\n7th,15th,21th & 28th bit is ON\n");
	}
	else
	{
		printf("\n7th,15th,21th & 28th bit is OFF\n");
	}
	
	return 0;
}
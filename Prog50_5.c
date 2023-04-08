#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT No)
{
	UINT iMask = 0X0000000F;
	UINT iRes = 0;
	
	iRes = No | iMask;
	
	return iRes;
}

int main()
{
	UINT Value = 0;
	UINT iRet = 0;
	
	printf("Enter number : ");
	scanf("%d",&Value);
	
	iRet = OffBit(Value);
	
	printf("Modified number is : %d\n",iRet);
	
	return 0;
}

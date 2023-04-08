#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT No)
{
	UINT iMask1 = 0X00000240;
	UINT iRes = 0;
	UINT iMask2 = 0X0000FDBF;
	
	iRes = No ^ iMask1;
	iRes = iRes & iMask2;
	
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

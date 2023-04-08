#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT No,int iStart, int iEnd)
{
	UINT iMask = 0;
	UINT iMask1 = 0X11111111;
	UINT iMask2 = 0X11111111;
	UINT iRes = 0;
	
	iMask1 = iMask1 << (iStart-1);
	iMask2 = iMask2 >> (32-iEnd);
	
	iMask = iMask1 & iMask2;
	
	iRes = No ^ iMask;
	
	return iRes;
}

int main()
{
	UINT Value = 0;
	int Pos1 = 0,Pos2 = 0;
	UINT iRet = 0;
	
	printf("Enter number : ");
	scanf("%d",&Value);
	
	printf("Enter start position : ");
	scanf("%d",&Pos1);
	
	printf("Enter end position : ");
	scanf("%d",&Pos2);
	
	iRet = ToggleBit(Value,Pos1,Pos2);

    printf("Toggled bit output : %d",iRet);
	
	return 0;
}
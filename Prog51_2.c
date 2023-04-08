#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OffBit(UINT No, int Pos)
{
	UINT iMask = 0X00000001;
	UINT iRes = 0;
	
	iMask = iMask << (Pos-1);	
	iMask = ~iMask;
	
	iRes = No & iMask;
	
	return iRes;
}

int main()
{
	UINT Value = 0;
	UINT iAns = 0;
	int iPos = 0;
	
	printf("Enter number : ");
	scanf("%d",&Value);
	
	printf("Enter position : ");
	scanf("%d",&iPos);
	
	iAns = OffBit(Value,iPos);
	
	printf("\nModified number is : %d\n",iAns);
	
	return 0;
}

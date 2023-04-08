#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OnBit(UINT No, int Pos)
{
	UINT iMask = 0X00000001;
	UINT iRes = 0;
	
	iMask = iMask << (Pos-1);	
	
	iRes = No | iMask;
	
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
	
	iAns = OnBit(Value,iPos);
	
	printf("\nModified number is : %d\n",iAns);
	
	return 0;
}

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT No, int iPos1, int iPos2)
{
	UINT iMask1 = 0X00000001;
	UINT iMask2 = 0X00000001;
	UINT iRes1 = 0;
	UINT iRes2 = 0;
	
	iMask1 = iMask1 << (iPos1-1);
	iRes1 = No & iMask1;
	
	iMask2 = iMask2 << (iPos2-1);
	iRes2 = No & iMask2;
	
	if((iRes1 == iMask1) || (iRes2 == iMask2))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	UINT Value = 0;
	int Pos1 = 0,Pos2 = 0;
	bool bRet = false;
	
	printf("Enter number : ");
	scanf("%d",&Value);
	
	printf("Enter first position : ");
	scanf("%d",&Pos1);
	
	printf("Enter second position : ");
	scanf("%d",&Pos2);
	
	bRet = ChkBit(Value,Pos1,Pos2);

    if(bRet == true)
	{
       printf("\n%dth or %dth Bit of %d is ON\n",Pos1,Pos2,Value);
	}	
    else
    {
       printf("\nBoth %dth or %dth Bit of %d is OFF\n",Pos1,Pos2,Value);
	}	
	
	return 0;
}
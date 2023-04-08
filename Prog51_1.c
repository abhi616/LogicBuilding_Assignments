#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT No, int Pos)
{
	UINT iMask = 0X00000001;
	UINT iRes = 0;
	
	iMask = iMask << (Pos-1);
	iRes = No & iMask;
	
	if(iRes == iMask)
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
	int iPos = 0;
	bool bRet = false;
	
	printf("Enter number : ");
	scanf("%d",&Value);
	
	printf("Enter position : ");
	scanf("%d",&iPos);
	
	bRet = ChkBit(Value,iPos);

    if(bRet == true)
	{
       printf("\n%d Bit of %d is ON\n",iPos,Value);
	}	
    else
    {
       printf("\n%d Bit of %d is OFF\n",iPos,Value);
	}	
	
	return 0;
}
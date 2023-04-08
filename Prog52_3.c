#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT No)
{
	UINT iMask1 = 0X00000001;
	UINT iMask2 = 0X00000001;
	UINT iRes1 = 0;
	UINT iRes2 = 0;
	
	iMask1 = iMask1 << 8;
	iRes1 = No & iMask1;
	
	iMask2 = iMask2 << 11;
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
	bool bRet = false;
	
	printf("Enter number : ");
	scanf("%d",&Value);
	
	bRet = ChkBit(Value);

    if(bRet == true)
	{
       printf("\n9th or 12th Bit of %d is ON\n",Value);
	}	
    else
    {
       printf("\nBoth 9th or 12th Bit of %d is OFF\n",Value);
	}	
	
	return 0;
}
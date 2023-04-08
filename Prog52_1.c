#include<stdio.h>

typedef unsigned int UINT;

int CountOnBit(UINT No)
{
    UINT iMask = 0X00000001;
	UINT iRes = 0;
	int i = 1, Count = 0;
	
	while(i <= 32)
	{
		iRes = No & iMask;
		
		if(iRes == iMask)
		{		
			Count++;
		}
		i++;
		iMask = iMask << 1;
	}
	
	return Count;
}

int main()
{
   UINT Value = 0;
   int iRet = 0;
   
   printf("Enter number : ");
   scanf("%d",&Value);
   
   iRet = CountOnBit(Value);
   
   printf("\nTotal ON bit count is : %d\n",iRet);
   
   return 0;
}	
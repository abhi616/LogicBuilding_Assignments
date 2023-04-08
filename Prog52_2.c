#include<stdio.h>

typedef unsigned int UINT;

void CommonBit(UINT iNo1, UINT iNo2)
{
    UINT iMask = 0X00000001;
	UINT iRes1 = 0, iRes2 = 0;
	int i = 1;
	
	printf("Common bits which are ON : ");
	while(i <= 32)
	{
		iRes1 = iNo1 & iMask;
		iRes2 = iNo2 & iMask;
		
		if((iRes1 == iMask) && (iRes2 == iMask))
		{		
			printf("%d ",i);
		}
		i++;
		iMask = iMask << 1;
	}

}

int main()
{
   UINT iValue1 = 0, iValue2 = 0;
   
   printf("Enter first number : ");
   scanf("%d",&iValue1);
   
   printf("Enter second number : ");
   scanf("%d",&iValue2);
   
   CommonBit(iValue1,iValue2);
   
   return 0;
}	
#include<stdio.h>

int MultFact(int iNo)
{
	int iCnt = 0;
	int iMult = 1;
	
	// Time Complexity : N/2
	iCnt = 1;
	while(iCnt <= iNo/2)
	{
		if(iNo % iCnt == 0)
		{
			iMult = iMult * iCnt;
		}
		iCnt++;
	}
	
	return iMult;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number :\n");
	scanf("%d",&iValue);
	
	iRet = MultFact(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
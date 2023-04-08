#include<stdio.h>

int FactDiff(int iNo)
{
	int iCnt = 0, iFSum = 0 , iNonFSum = 0, iAns = 0;;
	
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if(iNo % iCnt != 0)
		{
			iNonFSum = iNonFSum + iCnt;
		}
		else
		{
			iFSum = iFSum + iCnt;
		}
	}
	
	iAns = iFSum - iNonFSum;
	
	return iAns;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number :\n");
	scanf("%d",&iValue);
	
	iRet = FactDiff(iValue);
	
	printf("%d\n",iRet);
	
	return 0;
}
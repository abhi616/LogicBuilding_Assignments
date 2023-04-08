#include<stdio.h>

void NonFact(int iNo)
{
	int iCnt = 0;
	
	printf("Non Factors of %d are : \n",iNo);
	
	// Time Complexity : N
	
	iCnt = 1; 
	while(iCnt < iNo)
	{
		if(iNo % iCnt != 0)
		{
			printf("%d ",iCnt);
		}
		
	  iCnt++;
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number :\n");
	scanf("%d",&iValue);
	
	NonFact(iValue);
	
	return 0;
}
#include<stdio.h>

void Display(int iNo, int iFrequency)
{
	int iCnt = 0;
	
	for(iCnt = 1; iCnt <= iFrequency; iCnt++)
	{
		printf("%d ",iNo);
	}
	
}

int main()
{
	int iValue = 0;
	int iCount = 0;
	
	printf("Enter Number : \n");
	scanf("%d",&iValue);
	
	printf("\nEnter frequency : \n");
	scanf("%d",&iCount);
	
	Display(iValue,iCount);
	
	return 0;
}
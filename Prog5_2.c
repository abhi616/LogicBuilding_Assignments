#include<stdio.h>

void FactRev(int iNo)
{
	int iCnt = 0;
	
	printf("Factors of %d are in decreasing order : \n",iNo);
	//Time Complexity : N/2
	
	iCnt = iNo/2;
	
	while( iCnt > 0)
	{
		if(iNo % iCnt == 0)
		{
			printf("%d ",iCnt);
		}
		iCnt--;
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number :\n");
	scanf("%d",&iValue);
	
	FactRev(iValue);
	
	return 0;
}
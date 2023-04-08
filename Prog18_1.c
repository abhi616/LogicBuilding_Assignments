#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
	char cValue = 'A';
	
	for(iCnt = 1; iCnt <= iNo ; iCnt++)
	{
		printf("%c ",cValue);
		cValue++;
	}
}

int main()
{
   int iValue = 0;
   
   printf("Enter number : \n");
   scanf("%d",&iValue);
   
   Pattern(iValue);
   
   return 0;
}	